import { StrictMode } from "react";
import { createRoot } from "react-dom/client";

import pp from "./pp";

const rootElement = document.getElementById("root");
const root = createRoot(rootElement);

root.render(
    <StrictMode>
        <pp />
    </StrictMode>
)