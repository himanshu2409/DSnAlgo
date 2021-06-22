import React, {useState} from 'react'

function SearchBox(props) {
  const {parseList} = props;
  const [searchInput, setSearchInput] = useState('');
  const handleInputChange = (e) => {
    setSearchInput(e.target.value);
  }
  const handleButtonClick = () => {
    parseList(searchInput);
  }
  return (
    <>
      <input placeholder="search for doctor" id="search-input" value={searchInput} onChange={handleInputChange}/>
      <button onClick={handleButtonClick}> Search </button>
    </>
  )
}

export default SearchBox
