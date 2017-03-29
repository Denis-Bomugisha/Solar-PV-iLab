# Solar-PV-iLab
Remotely accessible solar PV laboratory created in LabVIEW

There has been a tremendous increase in the use and development of remote labs over the past decade. 
At Makerere University, remote experimentation has been made possible through the use of a scalable and generic platform-
the Massachusetts Institute of Technology (MIT) iLabs Shared Architecture     (ISA).     
With     this     middleware     infrastructure, students in the College of Engineering, Design, Art and Technology have been able
to remotely access and share scarce laboratory resources. This is the design and implementation of a remote Solar Photovoltaic laboratory
based on the ISA.  In the laboratory design, a solar simulator which provides irradiation matching the sun’s spectra, is used 
to provide constant irradiation to a solar panel. A National Instruments Educational Laboratory Virtual Instrumentation Suite
(NI ELVIS II+) prototyping board is used for data acquisition to obtain current and voltage values from the solar panel.
The user interface to the Solar PV lab is a LabVIEW Virtual Instrument (VI), on which interactive controls for the Solar Simulator 
are exposed. A live video feed is also incorporated into the client user interface to enhance user interactivity and remote access 
to the VI is implemented within the interactive ISA. Graphs are plotted to illustrate the variation of irradiance and angle of incidence
with solar panel characteristics. The data obtained can then be compared to theoretical predictions.
