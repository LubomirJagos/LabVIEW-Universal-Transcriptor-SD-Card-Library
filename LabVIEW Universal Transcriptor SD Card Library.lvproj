<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="DevTests" Type="Folder" URL="../DevTests">
			<Property Name="NI.DISK" Type="Bool">true</Property>
		</Item>
		<Item Name="LabVIEW Universal Transcriptor SD Card Library.lvlib" Type="Library" URL="../LabVIEW Universal Transcriptor SD Card Library.lvlib"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="delay.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Universal Transcriptor/LabVIEW to Arduino Transcriptor/Transcriptors/System API/delay.vi"/>
				<Item Name="Serial begin.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Universal Transcriptor/LabVIEW to Arduino Transcriptor/Transcriptors/System API/Serial begin.vi"/>
				<Item Name="Serial println.vi" Type="VI" URL="/&lt;vilib&gt;/LabVIEW Universal Transcriptor/LabVIEW to Arduino Transcriptor/Transcriptors/System API/Serial println.vi"/>
			</Item>
			<Item Name="TranscriptorBasicObject.lvclass" Type="LVClass" URL="../../LabVIEW-Universal-Transcriptor/utils/TranscriptorBasicObject.lvclass"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
