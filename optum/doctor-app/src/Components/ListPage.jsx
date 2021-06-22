import React, {useState} from 'react'
import SearchBox from './SearchBox';
import data from '../Data/MockData'

function ListPage() {
  const mockData = [...data];
  
  const [searchString, setsearchString] = useState('');
  const [doctorsList, setdoctorsList] = useState([])
  const [list, setList] = useState([])
  const filterList = (searchInput) => {
    console.log('searchInput-- ',searchInput)
    let upperCaseValue = searchInput.toUpperCase();
    const filteredList = mockData.filter((user) => {
      let userUpperCase = user.name.toUpperCase();
      return userUpperCase.includes(upperCaseValue);
    })
    setdoctorsList(filteredList);
  }
  return (
    <div id="container">
      <div id="search-box"> 
        <SearchBox parseList={filterList}></SearchBox>
      </div>
      <div id="list">
        {doctorsList.map((doctor) => (
          <div key={doctor.id} id="doctors-list">
            <div id='name'> {doctor.name} , {doctor.degree}</div>
            <div id="links"> <a href=""> Doctor's presciption</a><a href=""> Doctor's bio</a> </div>
            <div id="links"> <a href=""> Previous Cases</a><a href=""> Degree Details</a> </div>
          </div>
        ))}
      </div>
    </div>
  )
}

export default ListPage
