import React from "react";
import "./ImageCard.css";

const ImageCard = ({ image }) => {
  return (
    <div className="image-card">
      <img src={image.urls.small} alt={image.alt_description} />
      <p>{image.description || "Untitled"}</p>
    </div>
  );
};

export default ImageCard;
