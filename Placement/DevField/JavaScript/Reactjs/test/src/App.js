import React, { useEffect, useState } from "react";
import Gallery from "./Gallery";

function App() {
  const [images, setImages] = useState([]);
  const [loading, setLoading] = useState(true);

  // Fetch images from API
  useEffect(() => {
    const fetchImages = async () => {
      try {
        const response = await fetch(
          "https://api.unsplash.com/photos/?client_id=oXT29SKgMU-SpuP7u9Gjp6U_0cbE9NdfdIUir-J1VVY"
        );
        const data = await response.json();
        setImages(data);
        setLoading(false);
      } catch (error) {
        console.error("Error fetching images:", error);
        setLoading(false);
      }
    };
    fetchImages();
  }, []);

  if (loading) {
    return <div>Loading...</div>;
  }

  return (
    <div className="App">
      <h1>Image Gallery</h1>
      <Gallery images={images} />
    </div>
  );
}

export default App;
