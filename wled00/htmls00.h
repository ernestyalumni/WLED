/*
 * favicon
 */
const char favicon[156] PROGMEM = {
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x00,
  0x18, 0x00, 0x86, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x89, 0x50,
  0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 0x00, 0x0D, 0x49, 0x48,
  0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x06,
  0x00, 0x00, 0x00, 0x1F, 0xF3, 0xFF, 0x61, 0x00, 0x00, 0x00, 0x4D, 0x49,
  0x44, 0x41, 0x54, 0x38, 0x8D, 0x63, 0xFC, 0xFF, 0xFF, 0x3F, 0x03, 0xB1,
  0x80, 0xD1, 0x9E, 0x01, 0x43, 0x31, 0x13, 0xD1, 0xBA, 0x71, 0x00, 0x8A,
  0x0D, 0x60, 0x21, 0xA4, 0x00, 0xD9, 0xD9, 0xFF, 0x0F, 0x32, 0x30, 0x52,
  0xDD, 0x05, 0xB4, 0xF1, 0x02, 0xB6, 0xD0, 0xA6, 0x99, 0x0B, 0x68, 0x1F,
  0x0B, 0xD8, 0x42, 0x9E, 0xAA, 0x2E, 0xA0, 0xD8, 0x00, 0x46, 0x06, 0x3B,
  0xCC, 0xCC, 0x40, 0xC8, 0xD9, 0x54, 0x75, 0x01, 0xE5, 0x5E, 0x20, 0x25,
  0x3B, 0x63, 0x03, 0x00, 0x3E, 0xB7, 0x11, 0x5A, 0x8D, 0x1C, 0x07, 0xB4,
  0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82
};

/*
 * Index html
 */
//head
const char PAGE_index0[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head><meta http-equiv=Content-Type content="text/html; charset=windows-1252">
<title>WLED 0.4p</title>
<script>var d=document;resp="";var nla=false;var nra=false;var nsa=false;var sto=false;var hsb=false;var fxa=false;var psa=false;var uwv=false;var lastsx=0;var nState=0;bCol="DarkTurquoise";dC="black";function gId(a){return d.getElementById(a)}function Startup(){gId("fxI").addEventListener("keypress",function(a){if(a.keyCode==13){a.preventDefault();GetFX()}});setInterval("GIO()",5000);GIO()}function GIO(){nocache="&nocache="+Math.random()*1000000;var a=new XMLHttpRequest();a.onreadystatechange=function(){if(this.readyState==4){if(this.status==200){if(this.responseXML!=null){d.Cf.SA.value=this.responseXML.getElementsByTagName("act")[0].childNodes[0].nodeValue;d.Cf.SR.value=this.responseXML.getElementsByTagName("cl")[0].childNodes[0].nodeValue;d.Cf.SG.value=this.responseXML.getElementsByTagName("cl")[1].childNodes[0].nodeValue;d.Cf.SB.value=this.responseXML.getElementsByTagName("cl")[2].childNodes[0].nodeValue;if(this.responseXML.getElementsByTagName("wv")[0].childNodes[0].nodeValue>=0){d.Cf.SW.value=this.responseXML.getElementsByTagName("wv")[0].childNodes[0].nodeValue;if(!uwv){gId("slW").style.display="block"}uwv=true}else{gId("slW").style.display="none";uwv=false}if(d.activeElement!=gId("fxI")){d.Cf.TF.value=this.responseXML.getElementsByTagName("fx")[0].childNodes[0].nodeValue}d.Cf.SX.value=this.responseXML.getElementsByTagName("sx")[0].childNodes[0].nodeValue;nla=(this.responseXML.getElementsByTagName("nl")[0].innerHTML)!=0?true:false;nState=0;nState=(this.responseXML.getElementsByTagName("nr")[0].innerHTML)!=0?true:false;nState+=2*(this.responseXML.getElementsByTagName("ns")[0].innerHTML)!=0?true:false;hsb=(this.responseXML.getElementsByTagName("md")[0].innerHTML)!=0?true:false;d.getElementsByClassName("desc")[0].innerHTML=this.responseXML.getElementsByTagName("desc")[0].innerHTML;UV()}}}};a.open("GET","win/"+resp+nocache,true);a.send(null);resp=""}function GetCheck(){resp+="&A="+Cf.SA.value;resp+="&R="+Cf.SR.value;resp+="&G="+Cf.SG.value;resp+="&B="+Cf.SB.value;if(uwv){resp+="&W="+Cf.SW.value}UV();GIO()}function GetFX(){resp+="&FX="+Cf.TF.value;resp+="&SX="+Cf.SX.value;UV();GIO()}function rgb2hex(e,c,a){var b=a|(c<<8)|(e<<16);return"#"+(16777216+b).toString(16).slice(1)}function lingrad(e,c,a){return"linear-gradient(white, "+rgb2hex(e,c,a)+")"}function UV(){d.body.style.background=lingrad(Cf.SR.value,Cf.SG.value,Cf.SB.value);setHS(Cf.SR.value,Cf.SG.value,Cf.SB.value);SetHSB();nlb.style.fill=(nla)?bCol:dC;switch(nState){case 0:gId("path1").style.fill=dC;gId("path2").style.fill=dC;break;case 1:gId("path1").style.fill=bCol;gId("path2").style.fill=dC;break;case 2:gId("path1").style.fill=dC;gId("path2").style.fill=bCol;break;case 3:gId("path1").style.fill=bCol;gId("path2").style.fill=bCol;break}tgb.style.fill=(Cf.SA.value>0)?bCol:dC;ccX.style.display=(Cf.TF.value>52)?"block":"none";fof.style.fill=(Cf.TF.value>52)?bCol:dC;fmr.style.fill=(Cf.TF.value<1)?bCol:dC}function TgT(){if(Cf.SA.value>0){resp+="&T=0";Cf.SA.value=0}else{resp+="&T=2"}UV();GIO()}function TgFX(){if(psa){psa=false;SetPS()}fxa=!fxa;if(sto){CloseSettings()}SetFX()}function SwitchFX(a){d.Cf.TF.value=parseInt(d.Cf.TF.value)+a;if(d.Cf.TF.value<0){d.Cf.TF.value=0}if(d.Cf.TF.value>57){d.Cf.TF.value=53}GetFX()}function SetFX(){if(fxa){fxb.style.fill=bCol;gId("slA").style.display="none";gId("slR").style.display="none";gId("slG").style.display="none";gId("slB").style.display="none";gId("slH").style.display="none";gId("slS").style.display="none";gId("slW").style.display="none";gId("slX").style.display="block";gId("tlX").style.display="block";gId("tlP").style.display="none"}else{fxb.style.fill=dC;gId("slA").style.display="block";gId("slX").style.display="none";gId("tlX").style.display="none";if(uwv){gId("slW").style.display="block"}SetHSB()}}function SetHSB(){if(fxa||psa){return}if(hsb){gId("slR").style.display="none";gId("slG").style.display="none";gId("slB").style.display="none";gId("slH").style.display="block";gId("slS").style.display="block";mdb.style.fill=bCol}else{gId("slR").style.display="block";gId("slG").style.display="block";gId("slB").style.display="block";gId("slH").style.display="none";gId("slS").style.display="none";mdb.style.fill=dC}}function TgHSB(){if(fxa){fxa=false;SetFX()}if(psa){psa=false;SetPS()}if(sto){CloseSettings()}hsb=!hsb;resp+=((hsb)?"&MD=1":"&MD=0");SetHSB()}function TgPS(){psa=!psa;fxa=true;SetFX();fxa=false;fxb.style.fill=dC;if(sto){CloseSettings()}SetPS()}function SwitchPS(a){d.Cf.FF.value=parseInt(d.Cf.FF.value)+a;if(d.Cf.FF.value<0){d.Cf.FF.value=0}if(d.Cf.FF.value>24){d.Cf.FF.value=24}}function SetPS(){if(psa){psb.style.fill=bCol;gId("slX").style.display="none";gId("tlX").style.display="none";gId("tlP").style.display="block"}else{psb.style.fill=dC;gId("slA").style.display="block";gId("slX").style.display="none";gId("tlX").style.display="none";gId("tlP").style.display="none";if(uwv){gId("slW").style.display="block"}SetHSB()}}function PSIO(a){if(a){resp+="&PS=";resp+=d.Cf.FF.value}else{if(d.Cf.BC.checked&&d.Cf.CC.checked&&d.Cf.FC.checked){resp+="&PL=";resp+=d.Cf.FF.value}else{if(d.Cf.BC.checked){resp+="&PA=";resp+=d.Cf.FF.value}else{if(d.Cf.CC.checked){resp+="&PC=";resp+=d.Cf.FF.value}else{if(d.Cf.FC.checked){resp+="&PX=";resp+=d.Cf.FF.value}}}}}}function OpenSettings(){sto=true;stb.style.fill=bCol;cdB.style.display="none";stf.style.display="inline";stf.src="/settings"}function CloseSettings(){sto=false;stb.style.fill=dC;cdB.style.display="inline";stf.style.display="none"}function TgSettings(){if(sto){CloseSettings()}else{OpenSettings()}}function TgNl(){nla=!nla;resp+=(nla)?"&NL=1":"&NL=0";UV();GIO()}function TgN(){nState++;if(nState>3){nState=0}switch(nState){case 0:resp+="&SN=0&RN=0";break;case 1:resp+="&SN=0&RN=1";break;case 2:resp+="&SN=1&RN=0";break;case 3:resp+="&SN=1&RN=1";break}UV();GIO()}function setHS(){var e,k,j,a=arguments[0]/255,i=arguments[1]/255,l=arguments[2]/255,f,o,n=Math.max(a,i,l),m=n-Math.min(a,i,l),c=function(b){return(n-b)/6/m+1/2};if(m==0){f=o=0}else{o=m/n;e=c(a);k=c(i);j=c(l);if(a===n){f=j-k}else{if(i===n){f=(1/3)+e-j}else{if(l===n){f=(2/3)+k-e}}}if(f<0){f+=1}else{if(f>1){f-=1}}}if(o>0){d.Cf.SH.value=f}d.Cf.SS.value=o}function GetRGB(){var a,l,n,j,m,e,c,u;var k=d.Cf.SH.value,w=d.Cf.SS.value,o=255;j=Math.floor(k*6);m=k*6-j;e=o*(1-w);c=o*(1-m*w);u=o*(1-(1-m)*w);switch(j%6){case 0:a=o,l=u,n=e;break;case 1:a=c,l=o,n=e;break;case 2:a=e,l=o,n=u;break;case 3:a=e,l=c,n=o;break;case 4:a=u,l=e,n=o;break;case 5:a=o,l=e,n=c;break}d.Cf.SR.value=a;d.Cf.SG.value=l;d.Cf.SB.value=n;GetCheck()}function GetCC(){resp+="&CP=";resp+=d.Cf.PF.value;resp+="&CS=";resp+=d.Cf.SF.value;resp+="&CM=";resp+=d.Cf.HF.value;resp+=(d.Cf.SC.checked)?"&CF=1":"&CF=0";resp+=(d.Cf.EC.checked)?"&CE=1":"&CE=0";UV();GIO()};</script>
<style>.ctrl_box{margin:auto;width:80vw;background-color:#b9b9b9;position:absolute;top:60%;left:50%;transform:translate(-50%,-50%)}input[type=number]{width:3em}.sliders{width:100%;height:12vh;margin-top:2vh}.sliderA{margin-left:auto;margin-right:auto;width:77vw;background:linear-gradient(to right,black,yellow)}.sliderR{margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,black,red)}.sliderG{margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,black,green)}.sliderB{margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,black,blue)}.sliderW{display:none;margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,black,white)}.sliderH{display:none;margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,red,orange,yellow,green,cyan,blue,violet,red)}.sliderS{display:none;margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,grey,green)}.toolsFX{display:none;margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw}.toolsCC{display:none}.toolsPS{display:none;margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw}.sliderX{display:none;margin-left:auto;margin-right:auto;margin-top:2vh;width:77vw;background:linear-gradient(to right,black,white)}body{text-align:center;background:linear-gradient(white,black);height:100%;margin:0;background-repeat:no-repeat;background-attachment:fixed}html{height:100%}iframe{display:none;margin:auto;width:80vw;height:50vh;position:absolute;top:60%;left:50%;transform:translate(-50%,-50%)}svg{width:12vw;height:10vmin}input[type=range]{-webkit-appearance:none;margin:-4px 0}input[type=range]:focus{outline:0}input[type=range]::-webkit-slider-runnable-track{width:100%;height:12vh;cursor:pointer;background:#ddd}input[type=range]::-webkit-slider-thumb{height:10vh;width:10vh;background:#fff;cursor:pointer;-webkit-appearance:none;margin-top:1vh}input[type=range]::-moz-range-track{width:100%;height:12vh;cursor:pointer;background:#ddd}input[type=range]::-moz-range-thumb{height:10vh;width:10vh;background:#fff;cursor:pointer;margin-top:1vh}input[type=range]::-ms-track{width:100%;height:12vh;cursor:pointer;background:transparent;border-color:transparent;color:transparent}input[type=range]::-ms-fill-lower{background:#ddd}input[type=range]::-ms-fill-upper{background:#ddd}input[type=range]::-ms-thumb{width:10vh;background:#fff;cursor:pointer;height:10vh}</style>
<style id=holderjs-style type=text/css></style></head>
)=====";

//body1 (svg defs)
const char PAGE_index1[] PROGMEM = R"=====(
<body onload=Startup() class=__plain_text_READY__>
<span class=desc> Loading... </span>
<svg style=position:absolute;width:0;height:0;overflow:hidden version=1.1 xmlns=http://www.w3.org/2000/svg>
<defs>//Linearicons.com/free
<symbol id=lnr-power-switch viewBox="0 0 1024 1024"><path d="M486.4 614.4c-14.138 0-25.6-11.461-25.6-25.6v-460.8c0-14.138 11.462-25.6 25.6-25.6s25.6 11.462 25.6 25.6v460.8c0 14.139-11.462 25.6-25.6 25.6z"></path><path d="M486.4 972.8c-102.57 0-199-39.944-271.53-112.47-72.528-72.528-112.47-168.96-112.47-271.53 0-84.395 26.859-164.478 77.674-231.594 49.15-64.915 118.979-113.394 196.624-136.501 13.55-4.034 27.805 3.683 31.838 17.234s-3.683 27.805-17.234 31.838c-139.955 41.654-237.702 172.84-237.702 319.022 0 183.506 149.294 332.8 332.8 332.8s332.8-149.294 332.8-332.8c0-146.187-97.75-277.374-237.71-319.024-13.552-4.034-21.267-18.288-17.234-31.838 4.032-13.552 18.29-21.267 31.837-17.235 77.646 23.106 147.48 71.582 196.632 136.499 50.816 67.115 77.675 147.202 77.675 231.598 0 102.57-39.942 199.002-112.47 271.53-72.528 72.526-168.96 112.47-271.53 112.47z"></path></symbol>
<symbol id=lnr-list viewBox="0 0 1024 1024"><path d="M998.4 819.2h-768c-14.138 0-25.6-11.461-25.6-25.6s11.462-25.6 25.6-25.6h768c14.139 0 25.6 11.461 25.6 25.6s-11.461 25.6-25.6 25.6z"></path><path d="M998.4 563.2h-768c-14.138 0-25.6-11.461-25.6-25.6s11.462-25.6 25.6-25.6h768c14.139 0 25.6 11.461 25.6 25.6s-11.461 25.6-25.6 25.6z"></path><path d="M998.4 307.2h-768c-14.138 0-25.6-11.462-25.6-25.6s11.462-25.6 25.6-25.6h768c14.139 0 25.6 11.462 25.6 25.6s-11.461 25.6-25.6 25.6z"></path><path d="M76.8 358.4c-42.347 0-76.8-34.453-76.8-76.8s34.453-76.8 76.8-76.8 76.8 34.453 76.8 76.8-34.453 76.8-76.8 76.8zM76.8 256c-14.115 0-25.6 11.485-25.6 25.6s11.485 25.6 25.6 25.6 25.6-11.485 25.6-25.6-11.485-25.6-25.6-25.6z"></path><path d="M76.8 614.4c-42.347 0-76.8-34.451-76.8-76.8 0-42.347 34.453-76.8 76.8-76.8s76.8 34.453 76.8 76.8c0 42.349-34.453 76.8-76.8 76.8zM76.8 512c-14.115 0-25.6 11.485-25.6 25.6s11.485 25.6 25.6 25.6 25.6-11.485 25.6-25.6-11.485-25.6-25.6-25.6z"></path><path d="M76.8 870.4c-42.347 0-76.8-34.451-76.8-76.8s34.453-76.8 76.8-76.8 76.8 34.451 76.8 76.8-34.453 76.8-76.8 76.8zM76.8 768c-14.115 0-25.6 11.485-25.6 25.6s11.485 25.6 25.6 25.6 25.6-11.485 25.6-25.6-11.485-25.6-25.6-25.6z"></path></symbol>
<symbol id=lnr-moon viewBox="0 0 1024 1024"><path d="M524.8 1024c-140.179 0-271.968-54.589-371.090-153.71s-153.71-230.91-153.71-371.090c0-115.242 37-224.010 106.997-314.546 33.528-43.365 73.674-81.155 119.325-112.323 46.050-31.44 96.664-55.424 150.437-71.285 9.819-2.901 20.424 0.336 26.957 8.222s7.738 18.906 3.064 28.016c-33.006 64.339-48.379 125.702-48.379 193.115 0 239.97 195.23 435.2 435.2 435.2 67.414 0 128.776-15.371 193.115-48.378 9.107-4.674 20.13-3.469 28.016 3.064s11.12 17.134 8.224 26.957c-15.861 53.773-39.845 104.387-71.286 150.435-31.166 45.65-68.958 85.797-112.323 119.325-90.536 69.998-199.306 106.997-314.546 106.997zM336.397 69.896c-172.741 73.982-285.197 240.059-285.197 429.304 0 261.144 212.456 473.6 473.6 473.6 189.234 0 355.314-112.475 429.304-285.197-52.406 19.598-105.373 29.197-160.504 29.197-129.922 0-252.067-50.594-343.936-142.462-91.869-91.87-142.464-214.016-142.464-343.938 0-55.131 9.6-108.098 29.197-160.504z"></path></symbol>
<symbol id=lnr-cog viewBox="0 0 1024 1024"><path d="M390.71 1008.755c-2.109 0-4.248-0.262-6.378-0.81-45.976-11.803-90.149-30.042-131.291-54.21-11.923-7.003-16.13-22.21-9.501-34.344 8.15-14.925 12.459-31.866 12.459-48.992 0-56.464-45.936-102.4-102.4-102.4-17.125 0-34.066 4.309-48.992 12.459-12.133 6.627-27.339 2.421-34.342-9.501-24.17-41.142-42.408-85.315-54.211-131.293-3.333-12.989 3.92-26.349 16.629-30.629 41.699-14.037 69.717-53.034 69.717-97.037s-28.018-83-69.718-97.040c-12.707-4.278-19.962-17.638-16.627-30.627 11.803-45.976 30.042-90.149 54.211-131.291 7.003-11.923 22.21-16.13 34.344-9.501 14.923 8.15 31.864 12.459 48.99 12.459 56.464 0 102.4-45.936 102.4-102.4 0-17.126-4.309-34.067-12.459-48.99-6.629-12.134-2.422-27.341 9.501-34.344 41.141-24.168 85.314-42.408 131.291-54.211 12.994-3.334 26.349 3.92 30.627 16.627 14.040 41.701 53.037 69.718 97.040 69.718s83-28.018 97.038-69.717c4.28-12.71 17.645-19.965 30.629-16.629 45.976 11.802 90.15 30.042 131.293 54.211 11.922 7.003 16.128 22.208 9.501 34.342-8.152 14.926-12.461 31.867-12.461 48.992 0 56.464 45.936 102.4 102.4 102.4 17.126 0 34.067-4.309 48.992-12.459 12.138-6.629 27.341-2.421 34.344 9.501 24.166 41.141 42.406 85.314 54.21 131.291 3.334 12.989-3.918 26.349-16.627 30.627-41.701 14.040-69.718 53.037-69.718 97.040s28.018 83 69.718 97.038c12.707 4.28 19.962 17.638 16.627 30.629-11.803 45.976-30.042 90.15-54.21 131.291-7.005 11.925-22.208 16.128-34.344 9.502-14.926-8.152-31.867-12.461-48.992-12.461-56.464 0-102.4 45.936-102.4 102.4 0 17.125 4.309 34.066 12.461 48.992 6.627 12.136 2.421 27.341-9.502 34.344-41.141 24.166-85.314 42.406-131.291 54.21-12.992 3.336-26.349-3.918-30.629-16.627-14.038-41.701-53.035-69.718-97.038-69.718s-83 28.018-97.040 69.718c-3.578 10.624-13.502 17.437-24.25 17.437zM512 870.4c57.715 0 109.693 32.138 135.917 82.029 26.637-8.218 52.507-18.875 77.299-31.846-5.541-16.077-8.416-33.075-8.416-50.182 0-84.696 68.904-153.6 153.6-153.6 17.107 0 34.106 2.875 50.181 8.418 12.971-24.792 23.63-50.662 31.846-77.299-49.89-26.226-82.027-78.203-82.027-135.918s32.138-109.691 82.029-135.918c-8.218-26.637-18.875-52.506-31.846-77.299-16.077 5.542-33.074 8.418-50.182 8.418-84.696 0-153.6-68.904-153.6-153.6 0-17.107 2.875-34.106 8.418-50.181-24.792-12.971-50.662-23.63-77.299-31.846-26.226 49.89-78.203 82.027-135.918 82.027s-109.691-32.138-135.917-82.027c-26.637 8.216-52.507 18.874-77.299 31.846 5.542 16.075 8.416 33.072 8.416 50.181 0 84.696-68.904 153.6-153.6 153.6-17.109 0-34.106-2.874-50.181-8.418-12.973 24.794-23.63 50.662-31.846 77.299 49.89 26.227 82.027 78.203 82.027 135.918s-32.138 109.693-82.027 135.917c8.216 26.637 18.875 52.507 31.846 77.299 16.075-5.541 33.074-8.416 50.181-8.416 84.696 0 153.6 68.904 153.6 153.6 0 17.109-2.875 34.106-8.418 50.181 24.794 12.971 50.662 23.63 77.299 31.846 26.227-49.89 78.203-82.027 135.918-82.027z"></path><path d="M512 665.6c-84.696 0-153.6-68.904-153.6-153.6s68.904-153.6 153.6-153.6 153.6 68.904 153.6 153.6-68.904 153.6-153.6 153.6zM512 409.6c-56.464 0-102.4 45.936-102.4 102.4s45.936 102.4 102.4 102.4c56.464 0 102.4-45.936 102.4-102.4s-45.936-102.4-102.4-102.4z"></path></symbol>
<symbol id=lnr-heart viewBox="0 0 1024 1024"><path d="M486.4 972.8c-4.283 0-8.566-1.074-12.434-3.222-4.808-2.67-119.088-66.624-235.122-171.376-68.643-61.97-123.467-125.363-162.944-188.418-50.365-80.443-75.901-160.715-75.901-238.584 0-148.218 120.582-268.8 268.8-268.8 50.173 0 103.462 18.805 150.051 52.952 27.251 19.973 50.442 44.043 67.549 69.606 17.107-25.565 40.299-49.634 67.55-69.606 46.589-34.147 99.878-52.952 150.050-52.952 148.218 0 268.8 120.582 268.8 268.8 0 77.869-25.538 158.141-75.901 238.584-39.478 63.054-94.301 126.446-162.944 188.418-116.034 104.754-230.314 168.706-235.122 171.376-3.867 2.149-8.15 3.222-12.434 3.222zM268.8 153.6c-119.986 0-217.6 97.614-217.6 217.6 0 155.624 120.302 297.077 221.224 388.338 90.131 81.504 181.44 138.658 213.976 158.042 32.536-19.384 123.845-76.538 213.976-158.042 100.922-91.261 221.224-232.714 221.224-388.338 0-119.986-97.616-217.6-217.6-217.6-87.187 0-171.856 71.725-193.314 136.096-3.485 10.453-13.267 17.504-24.286 17.504s-20.802-7.051-24.286-17.504c-21.456-64.371-106.125-136.096-193.314-136.096z"></path></symbol>
<symbol id=lnr-star viewBox="0 0 1024 1024"><path d="M793.598 972.8c-4.205 0-8.422-1.034-12.258-3.126l-269.341-146.912-269.341 146.912c-8.598 4.691-19.118 4.061-27.098-1.613-7.981-5.677-12.022-15.41-10.413-25.069l49.034-294.206-195.483-195.485c-6.781-6.781-9.203-16.782-6.277-25.914s10.712-15.862 20.17-17.438l294.341-49.058 122.17-244.339c4.336-8.674 13.2-14.152 22.898-14.152s18.562 5.478 22.898 14.152l122.17 244.339 294.341 49.058c9.459 1.576 17.243 8.307 20.17 17.438s0.504 19.133-6.277 25.914l-195.483 195.485 49.034 294.206c1.61 9.659-2.434 19.392-10.413 25.069-4.419 3.144-9.621 4.739-14.84 4.739zM512 768c4.219 0 8.437 1.042 12.259 3.126l235.445 128.426-42.557-255.344c-1.36-8.155 1.302-16.464 7.15-22.309l169.626-169.626-258.131-43.022c-8.080-1.346-15.027-6.477-18.69-13.803l-105.102-210.205-105.102 210.205c-3.664 7.326-10.61 12.458-18.69 13.803l-258.131 43.022 169.624 169.626c5.846 5.845 8.509 14.155 7.15 22.309l-42.557 255.344 235.446-128.426c3.821-2.085 8.040-3.126 12.259-3.126z"></path></symbol>
<symbol id=lnr-cross viewBox="0 0 1024 1024"><path d="M548.203 537.6l289.099-289.098c9.998-9.998 9.998-26.206 0-36.205-9.997-9.997-26.206-9.997-36.203 0l-289.099 289.099-289.098-289.099c-9.998-9.997-26.206-9.997-36.205 0-9.997 9.998-9.997 26.206 0 36.205l289.099 289.098-289.099 289.099c-9.997 9.997-9.997 26.206 0 36.203 5 4.998 11.55 7.498 18.102 7.498s13.102-2.499 18.102-7.499l289.098-289.098 289.099 289.099c4.998 4.998 11.549 7.498 18.101 7.498s13.102-2.499 18.101-7.499c9.998-9.997 9.998-26.206 0-36.203l-289.098-289.098z"></path></symbol>
<symbol id=lnr-arrow-left-circle viewBox="0 0 1024 1024"><path d="M142.462 193.664c91.869-91.869 214.016-142.464 343.938-142.464s252.067 50.595 343.936 142.464 142.464 214.014 142.464 343.936-50.595 252.069-142.464 343.938-214.014 142.462-343.936 142.462-252.069-50.594-343.938-142.462-142.462-214.016-142.462-343.938 50.594-252.067 142.462-343.936zM486.4 972.8c239.97 0 435.2-195.23 435.2-435.2s-195.23-435.2-435.2-435.2c-239.97 0-435.2 195.23-435.2 435.2s195.23 435.2 435.2 435.2z"></path><path d="M186.701 519.501l204.8-204.8c9.995-9.998 26.206-9.998 36.203 0 9.998 9.997 9.998 26.206 0 36.203l-161.101 161.096h526.997c14.138 0 25.6 11.461 25.6 25.6s-11.462 25.6-25.6 25.6h-526.997l161.096 161.101c9.998 9.995 9.998 26.206 0 36.203-4.997 4.997-11.547 7.496-18.099 7.496s-13.102-2.499-18.099-7.501l-204.8-204.8c-10-9.997-10-26.202 0-36.198z"></path></symbol>
<symbol id=lnr-arrow-right-circle viewBox="0 0 1024 1024"><path d="M830.338 193.664c-91.869-91.869-214.016-142.464-343.938-142.464s-252.067 50.595-343.936 142.464-142.464 214.014-142.464 343.936 50.595 252.069 142.464 343.938 214.014 142.462 343.936 142.462 252.069-50.594 343.938-142.462 142.462-214.016 142.462-343.938-50.594-252.067-142.462-343.936zM486.4 972.8c-239.97 0-435.2-195.23-435.2-435.2s195.23-435.2 435.2-435.2c239.97 0 435.2 195.23 435.2 435.2s-195.23 435.2-435.2 435.2z"></path><path d="M786.099 519.501l-204.8-204.8c-9.995-9.998-26.206-9.998-36.203 0-9.998 9.997-9.998 26.206 0 36.203l161.101 161.096h-526.997c-14.138 0-25.6 11.461-25.6 25.6s11.462 25.6 25.6 25.6h526.997l-161.096 161.101c-9.998 9.995-9.998 26.206 0 36.203 4.997 4.997 11.547 7.496 18.099 7.496s13.102-2.499 18.099-7.501l204.8-204.8c10-9.997 10-26.202 0-36.198z"></path></symbol>
<symbol id=lnr-rocket viewBox="0 0 1024 1024"><path d="M691.2 460.8c-70.579 0-128-57.421-128-128s57.421-128 128-128 128 57.421 128 128-57.421 128-128 128zM691.2 256c-42.347 0-76.8 34.453-76.8 76.8s34.453 76.8 76.8 76.8 76.8-34.453 76.8-76.8-34.453-76.8-76.8-76.8z"></path><path d="M25.603 1024c-6.675 0-13.219-2.613-18.106-7.499-7.034-7.034-9.355-17.502-5.957-26.85 78.781-216.648 161.613-326.499 246.195-326.499 27.883 0 53.979 11.96 77.566 35.546 37.283 37.283 38.611 74.394 33.162 98.96-17.125 77.187-126.171 152.822-324.115 224.802-2.853 1.038-5.813 1.541-8.746 1.541zM247.736 714.354c-25.354 0-55.19 22.214-86.282 64.237-30.578 41.33-61.274 100.205-91.525 175.477 68.352-27.478 123.302-55.379 163.806-83.205 54.648-37.542 70.808-66.562 74.742-84.294 3.944-17.779-2.395-34.682-19.382-51.667-13.826-13.826-27.354-20.547-41.36-20.547z"></path><path d="M998.4 0c-132.848 0-251.256 22.534-351.939 66.981-82.997 36.638-154.075 88.075-211.258 152.882-10.674 12.098-20.552 24.334-29.691 36.586-44.142 2.942-89.275 20.47-134.362 52.221-38.13 26.851-76.459 64.014-113.923 110.458-62.965 78.054-101.706 154.987-103.325 158.226-5.605 11.211-2.25 24.814 7.904 32.166 4.501 3.258 9.758 4.856 14.992 4.856 6.573 0 13.109-2.52 18.064-7.434 0.243-0.24 24.714-24.299 66.469-47.926 34.41-19.474 87.461-42.336 151.613-46.384 16.219 41.541 62.662 91.181 84.954 113.47 22.291 22.291 71.931 68.734 113.472 84.955-4.046 64.152-26.91 117.202-46.382 151.611-23.629 41.757-47.686 66.227-47.89 66.432-8.878 8.878-10.006 22.885-2.666 33.070 4.952 6.87 12.77 10.634 20.782 10.634 3.867 0 7.779-0.877 11.434-2.704 3.237-1.619 80.17-40.36 158.226-103.325 46.443-37.464 83.606-75.794 110.458-113.922 31.75-45.088 49.278-90.221 52.221-134.363 12.251-9.139 24.49-19.019 36.586-29.693 64.806-57.181 116.243-128.259 152.883-211.258 44.443-100.682 66.979-219.091 66.979-351.939v-25.6h-25.6zM159.102 502.187c48.797-70.8 123.384-158.595 207.446-186.232-33.222 58.203-50.422 111.691-56.611 145.555-59.323 3.626-110.467 20.89-150.835 40.677zM521.87 864.781c19.762-40.35 36.995-91.453 40.619-150.718 33.859-6.187 87.336-23.384 145.528-56.597-27.658 83.92-115.381 158.49-186.147 207.315zM770.262 550.405c-106.48 93.952-216.794 115.195-232.662 115.195-0.102 0-10.581-0.23-38.867-20.136-19.728-13.883-42.682-33.618-64.63-55.566-21.95-21.95-41.683-44.902-55.566-64.632-19.906-28.285-20.136-38.763-20.136-38.866 0-15.869 21.243-126.182 115.197-232.662 112.416-127.406 284.533-197.059 498.894-202.227-5.17 214.358-74.822 386.477-202.229 498.894z"></path></symbol>
<symbol id=lnr-sync viewBox="0 0 1024 1024"><path id=path1 d="M1016.501 442.698c-9.997-9.997-26.206-9.997-36.203 0l-58.832 58.832c-2.63-105.486-44.947-204.27-119.835-279.16-77.362-77.365-180.222-119.97-289.63-119.97-152.28 0-291.122 83.699-362.342 218.435-6.606 12.499-1.83 27.989 10.669 34.597 12.498 6.606 27.989 1.83 34.597-10.669 62.33-117.914 183.826-191.163 317.077-191.163 194.014 0 352.501 154.966 358.224 347.619l-58.522-58.522c-9.997-9.997-26.206-9.997-36.203 0-9.998 9.998-9.998 26.206 0 36.205l102.4 102.4c4.998 4.998 11.549 7.498 18.101 7.498s13.102-2.499 18.101-7.499l102.4-102.4c9.998-9.997 9.998-26.205 0-36.203z"></path><path id=path2 d="M863.674 668.566c-12.502-6.603-27.99-1.832-34.597 10.669-62.328 117.915-183.826 191.165-317.077 191.165-194.016 0-352.502-154.966-358.224-347.621l58.522 58.522c5 5 11.55 7.499 18.102 7.499s13.102-2.499 18.102-7.499c9.997-9.997 9.997-26.206 0-36.203l-102.4-102.4c-9.998-9.997-26.206-9.997-36.205 0l-102.4 102.4c-9.997 9.997-9.997 26.206 0 36.203s26.206 9.997 36.205 0l58.83-58.832c2.63 105.488 44.946 204.272 119.835 279.162 77.365 77.363 180.224 119.97 289.632 119.97 152.28 0 291.12-83.699 362.342-218.435 6.608-12.501 1.829-27.99-10.669-34.598z"></path></symbol>
<symbol id=lnr-checkmark-circle viewBox="0 0 1024 1024"><path d="M486.4 1024c-129.922 0-252.067-50.594-343.936-142.464s-142.464-214.014-142.464-343.936c0-129.923 50.595-252.067 142.464-343.936s214.013-142.464 343.936-142.464c129.922 0 252.067 50.595 343.936 142.464s142.464 214.014 142.464 343.936-50.594 252.067-142.464 343.936c-91.869 91.87-214.014 142.464-343.936 142.464zM486.4 102.4c-239.97 0-435.2 195.23-435.2 435.2s195.23 435.2 435.2 435.2 435.2-195.23 435.2-435.2-195.23-435.2-435.2-435.2z"></path><path d="M384 742.4c-6.552 0-13.102-2.499-18.102-7.499l-153.6-153.6c-9.997-9.997-9.997-26.206 0-36.203 9.998-9.997 26.206-9.997 36.205 0l135.498 135.498 340.299-340.298c9.997-9.997 26.206-9.997 36.203 0 9.998 9.998 9.998 26.206 0 36.205l-358.4 358.4c-5 4.998-11.55 7.498-18.102 7.498z"></path></symbol>
<symbol id=lnr-arrow-down-circle viewBox="0 0 1024 1024"><path d="M830.336 881.538c91.869-91.869 142.464-214.016 142.464-343.938s-50.595-252.067-142.464-343.936-214.014-142.464-343.936-142.464-252.069 50.595-343.938 142.464-142.462 214.014-142.462 343.936 50.594 252.069 142.462 343.938 214.016 142.462 343.938 142.462 252.067-50.594 343.936-142.462zM51.2 537.6c0-239.97 195.23-435.2 435.2-435.2s435.2 195.23 435.2 435.2c0 239.97-195.23 435.2-435.2 435.2s-435.2-195.23-435.2-435.2z"></path><path d="M504.499 837.299l204.8-204.8c9.998-9.995 9.998-26.206 0-36.203-9.997-9.998-26.206-9.998-36.203 0l-161.096 161.101v-526.997c0-14.138-11.461-25.6-25.6-25.6s-25.6 11.462-25.6 25.6v526.997l-161.101-161.096c-9.995-9.998-26.206-9.998-36.203 0-4.997 4.997-7.496 11.547-7.496 18.099s2.499 13.102 7.501 18.099l204.8 204.8c9.997 10 26.202 10 36.198 0z"></path></symbol>
</defs>
</svg>
)=====";

//body2 (html)
const char PAGE_index2[] PROGMEM = R"=====(
<div id=tbB class=tool_box>
<svg id=tgb onclick=TgT()><use xlink:href=#lnr-power-switch></use></svg>
<svg id=mdb onclick=TgHSB()><use xlink:href=#lnr-list></use></svg>
<svg id=psb onclick=TgPS()><use xlink:href=#lnr-heart></use></svg>
<svg id=fxb onclick=TgFX()><use xlink:href=#lnr-star></use></svg>
<svg id=nlb onclick=TgNl()><use xlink:href=#lnr-moon></use></svg>
<svg id=nsb onclick=TgN()><use xlink:href=#lnr-sync></use></svg>
<svg id=stb onclick=TgSettings()><use xlink:href=#lnr-cog></use></svg>
</div>
<div id=cdB class=ctrl_box>
<form id=form_c name=Cf>
<br>
<div id=slA class=sliderA>
<input type=range title=Brightness class=sliders name=SA value=0 min=0 max=255 step=1 onchange=GetCheck()> </div>
<div id=slR class=sliderR>
<input type=range title="Red Value" class=sliders name=SR value=0 min=0 max=255 step=1 onchange=GetCheck()> </div>
<div id=slG class=sliderG>
<input type=range title="Green Value" class=sliders name=SG value=0 min=0 max=255 step=1 onchange=GetCheck()> </div>
<div id=slB class=sliderB>
<input type=range title="Blue Value" class=sliders name=SB value=0 min=0 max=255 step=1 onchange=GetCheck()> </div>
<div id=slH class=sliderH>
<input type=range title=Hue class=sliders name=SH value=0 min=0 max=1 step=0.025 onchange=GetRGB()> </div>
<div id=slS class=sliderS>
<input type=range title=Saturation class=sliders name=SS value=0 min=0 max=1 step=0.025 onchange=GetRGB()> </div>
<div id=slW class=sliderW>
<input type=range title="White Value" class=sliders name=SW value=0 min=0 max=255 step=1 onchange=GetCheck()> </div>
<div id=tlX class=toolsFX>
Effect Panel<br><br>
<svg id=fmr onclick=SwitchFX(-100)><use xlink:href=#lnr-cross></use></svg>
<svg id=for onclick=SwitchFX(-1)><use xlink:href=#lnr-arrow-left-circle></use></svg>
<svg id=fmf onclick=SwitchFX(1)><use xlink:href=#lnr-arrow-right-circle></use></svg>
<svg id=fof onclick=SwitchFX(100)><use xlink:href=#lnr-rocket></use></svg>
<br><input id=fxI name=TF type=number value=0 min=0 max=57 step=1 onchange=GetFX()><br><br>
Set secondary color to
<button type=button onclick=colSec(0)>White</button>
<button type=button onclick=colSec(1)>Black</button>
<button type=button onclick=colSec(2)>Random</button>
<button type=button onclick=colSec(3)>Primary</button>
<button type=button onclick=colSec(4)>Swap P/S</button>
<div id=ccX class=toolsCC>
<br>Custom Theater Chase<br>
using <input id=ccP name=PF type=number value=2 min=0 max=255 step=1 onchange=GetCC()> primary and
<input id=ccS name=SF type=number value=4 min=0 max=255 step=1 onchange=GetCC()> secondary color LEDs, <br>
doing <input id=ccH name=HF type=number value=1 min=0 max=255 step=1 onchange=GetCC()> steps per tick,
from <input type=checkbox onchange=GetCC() name=SC> start and <input type=checkbox onchange=GetCC() name=EC> end.
</div>
</div>
<div id=tlP class=toolsPS>
Favorite Presets<br><br>
<svg id=psl onclick=PSIO(false)><use xlink:href=#lnr-checkmark-circle></use></svg>
<svg id=psp onclick=SwitchPS(-1)><use xlink:href=#lnr-arrow-left-circle></use></svg>
<svg id=psn onclick=SwitchPS(1)><use xlink:href=#lnr-arrow-right-circle></use></svg>
<svg id=pss onclick=PSIO(true)><use xlink:href=#lnr-arrow-down-circle></use></svg>
<br><input id=psI name=FF type=number value=0 min=0 max=24 step=1><br><br>
Click checkmark to apply <input type=checkbox checked=true name=BC> brightness, <input type=checkbox checked=true name=CC> color and <input type=checkbox checked=true name=FC> effects.
</div>
<div id=slX class=sliderX>
<input type=range title="Effect Speed" class=sliders name=SX value=0 min=0 max=255 step=1 onchange=GetFX()> </div> <br>
</form>
</div>
<iframe id=stf src=about:blank></iframe>
</body>
</html>
)=====";
/*
 * SPIFFS editor html
 */
#ifdef USEFS
const char PAGE_edit[] PROGMEM = R"=====(
<!DOCTYPE html><html lang="en"><head><title>ESP Editor</title><style type="text/css" media="screen">.cm{z-index:300;position:absolute;left:5px;border:1px solid #444;background-color:#F5F5F5;display:none;box-shadow:0 0 10px rgba(0,0,0,.4);font-size:12px;font-family:sans-serif;font-weight:700}.cm ul{list-style:none;top:0;left:0;margin:0;padding:0}.cm li{position:relative;min-width:60px;cursor:pointer}.cm span{color:#444;display:inline-block;padding:6px}.cm li:hover{background:#444}.cm li:hover span{color:#EEE}.tvu ul,.tvu li{padding:0;margin:0;list-style:none}.tvu input{position:absolute;opacity:0}.tvu{font:normal 12px Verdana,Arial,Sans-serif;-moz-user-select:none;-webkit-user-select:none;user-select:none;color:#444;line-height:16px}.tvu span{margin-bottom:5px;padding:0 0 0 18px;cursor:pointer;display:inline-block;height:16px;vertical-align:middle;background:url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAQAAAC1+jfqAAAABGdBTUEAAK/INwWK6QAAABl0RVh0U29mdHdhcmUAQWRvYmUgSW1hZ2VSZWFkeXHJZTwAAADoSURBVBgZBcExblNBGAbA2ceegTRBuIKOgiihSZNTcC5LUHAihNJR0kGKCDcYJY6D3/77MdOinTvzAgCw8ysThIvn/VojIyMjIyPP+bS1sUQIV2s95pBDDvmbP/mdkft83tpYguZq5Jh/OeaYh+yzy8hTHvNlaxNNczm+la9OTlar1UdA/+C2A4trRCnD3jS8BB1obq2Gk6GU6QbQAS4BUaYSQAf4bhhKKTFdAzrAOwAxEUAH+KEM01SY3gM6wBsEAQB0gJ+maZoC3gI6iPYaAIBJsiRmHU0AALOeFC3aK2cWAACUXe7+AwO0lc9eTHYTAAAAAElFTkSuQmCC) no-repeat;background-position:0 0}.tvu span:hover{text-decoration:underline}@media screen and (-webkit-min-device-pixel-ratio:0){.tvu{-webkit-animation:webkit-adjacent-element-selector-bugfix infinite 1s}}@-webkit-keyframes webkit-adjacent-element-selector-bugfix{from{padding:0}to{padding:0}}#uploader{position:absolute;top:0;right:0;left:0;height:28px;line-height:24px;padding-left:10px;background-color:#444;color:#EEE}#tree{position:absolute;top:28px;bottom:0;left:0;width:160px;padding:8px}#editor,#preview{position:absolute;top:28px;right:0;bottom:0;left:160px;border-left:1px solid #EEE}#preview{background-color:#EEE;padding:5px}</style><script>
eval(function(p,a,c,k,e,r){e=function(c){return(c<a?'':e(parseInt(c/a)))+((c=c%a)>35?String.fromCharCode(c+29):c.toString(36))};if(!''.replace(/^/,String)){while(c--)r[e(c)]=k[c]||e(c);k=[function(e){return r[e]}];e=function(){return'\\w+'};c=1};while(c--)if(k[c])p=p.replace(new RegExp('\\b'+e(c)+'\\b','g'),k[c]);return p}('3 2d(d,f,g){5 h;5 i=6.r("2e");i.1a="1e";i.2o=w;i.G="1C";6.v(d).s(i);5 j=6.r("2e");j.K="3h-17";j.1a="13";j.G="17";j.2G="/";6.v(d).s(j);5 k=6.r("2i");k.J=\'2t\';6.v(d).s(k);5 l=6.r("2i");l.J=\'37\';6.v(d).s(l);3 10(){7(h.Y==4){7(h.B!=W)1t("1s["+h.B+"]: "+h.U);L{f.1E(j.t)}}}3 1H(p){h=u T();h.R=10;5 a=u 1c();a.1d("17",p);h.P("2s","/X");h.Q(a)}l.H=3(e){7(j.t.3n(".")===-1)q;1H(j.t);g.15(j.t)};k.H=3(e){7(i.16.C===0){q}h=u T();h.R=10;5 a=u 1c();a.1d("1C",i.16[0],j.t);h.P("1M","/X");h.Q(a)};i.3j=3(e){7(i.16.C===0)q;5 a=i.16[0].G;5 b=/(?:\\.([^.]+))?$/.E(a)[1];5 c=/(.*)\\.[^.]+$/.E(a)[1];7(z c!==y){a=c}7(z b!==y){7(b==="1p")b="1b";L 7(b==="3c")b="1N";a=a+"."+b}7(j.t==="/"||j.t.1X("/")===0){j.t="/"+a}L{j.t=j.t.3k(0,j.t.1X("/")+1)+a}}}3 25(k,l){5 m=6.v("29");5 n=6.r("2f");n.2g="2I";6.v(k).s(n);3 2h(a){6.v(\'2n-3f\').2l=a+"?2n=A"}3 1m(a){6.v("1l").D.O="1V";m.D.O="18";m.J=\'<2y 2l="\'+a+\'?2B=\'+2E.2F()+\'" D="20-2H:22%; 20-2K:22%; 2R:2Y; O:18;" />\'}3 23(a,b){5 c=6.r("24");a.s(c);5 d=6.r("19");c.s(d);7(1k(b)){d.J="<x>3x</x>";d.H=3(e){l.15(b);7(6.9.11(\'N\').C>0)6.9.I(a)}}L 7(1q(b)){d.J="<x>2u</x>";d.H=3(e){1m(b);7(6.9.11(\'N\').C>0)6.9.I(a)}}5 f=6.r("19");c.s(f);f.J="<x>2v</x>";f.H=3(e){2h(b);7(6.9.11(\'N\').C>0)6.9.I(a)};5 g=6.r("19");c.s(g);g.J="<x>2w</x>";g.H=3(e){2j(b);7(6.9.11(\'N\').C>0)6.9.I(a)}}3 2k(e,a,b){5 c=6.r("2f");5 d=6.9.1f?6.9.1f:6.1D.1f;5 f=6.9.1g?6.9.1g:6.1D.1g;5 g=1F.1h+f;5 h=1F.1i+d;c.2g=\'N\';c.D.O=\'18\';c.D.2Q=g+\'1I\';c.D.2T=h+\'1I\';23(c,a);6.9.s(c);5 i=c.2U;5 j=c.2W;c.2X=3(e){7(e.1h<g||e.1h>(g+i)||e.1i<h||e.1i>(h+j)){7(6.9.11(\'N\').C>0)6.9.I(c)}}}3 1J(a,b,c){5 d=6.r("19");d.K=(((a=="/")?"":a)+"/"+b);5 f=6.r("x");f.30=b;d.s(f);d.H=3(e){7(1k(d.K.1K())){l.15(d.K)}L 7(1q(d.K.1K())){1m(d.K)}};d.38=3(e){e.3a();e.3b();2k(e,d.K,A)};q d}3 1L(a,b,c){5 d=6.r("24");a.s(d);5 e=c.C;3d(5 i=0;i<e;i++){7(c[i].1a==="1e")d.s(1J(b,c[i].G,c[i].3e))}}3 1k(a){5 b=/(?:\\.([^.]+))?$/.E(a)[1];7(z b!==y){1j(b){8"1O":8"1b":8"1P":8"c":8"1Q":8"1R":8"1S":q A}}q w}3 1q(a){5 b=/(?:\\.([^.]+))?$/.E(a)[1];7(z b!==y){1j(b){8"2q":8"1N":8"2r":q A}}q w}1T.1E=3(a){n.I(n.1U[0]);F(n,"/")};3 1W(a){q 3(){7(o.Y==4){7(o.B!=W){1t("1s["+o.B+"]: "+o.U)}L{n.I(n.1U[0]);F(n,"/")}}}}3 2j(a){o=u T();o.R=1W(a);5 b=u 1c();b.1d("17",a);o.P("2x","/X");o.Q(b)}3 1Y(a,b){q 3(){7(o.Y==4){7(o.B==W)1L(a,b,2z.2A(o.U))}}}3 F(a,b){o=u T(a,b);o.R=1Y(a,b);o.P("1Z","/2C?2D="+b,A);o.Q(1n)}F(n,"/");q 1T}3 21(e,f,g,h,i){3 1o(a){5 b="V";5 c=/(?:\\.([^.]+))?$/.E(a)[1];7(z c!==y){1j(c){8"1O":b="V";12;8"1b":b="1p";12;8"1P":b="2J";12;8"c":b="1r";12;8"1Q":b="1r";12;8"1R":8"2L":8"2M":8"1p":8"2N":8"1S":b=c}}q b}7(z f==="y")f="/2O.1b";7(z g==="y"){g=1o(f)}7(z h==="y")h="2P";7(z i==="y"){i="13/"+g;7(g==="1r")i="13/V"}5 j=1n;5 k=14.X(e);3 10(){7(j.Y==4){7(j.B!=W)1t("1s["+j.B+"]: "+j.U)}}3 26(a,b,c){j=u T();j.R=10;5 d=u 1c();d.1d("1C",u 2S([b],{1a:c}),a);j.P("1M","/X");j.Q(d)}3 27(){7(j.Y==4){6.v("29").D.O="1V";6.v("1l").D.O="18";7(j.B==W)k.28(j.U);L k.28("");k.2V()}}3 F(a){j=u T();j.R=27;j.P("1Z",a,A);j.Q(1n)}7(g!=="V")k.M().2a("14/2b/"+g);k.2Z("14/2c/"+h);k.$31=32;k.M().33(A);k.M().34(2);k.35(A);k.36(w);k.1u.1v({G:\'39\',1w:{1x:\'1y-S\',1z:\'1A-S\'},E:3(a){26(f,a.3g()+"",i)},1B:w});k.1u.1v({G:\'3i\',1w:{1x:\'1y-Z\',1z:\'1A-Z\'},E:3(a){a.M().2m().3l(w)},1B:w});k.1u.1v({G:\'3m\',1w:{1x:\'1y-1G-Z\',1z:\'1A-1G-Z\'},E:3(a){a.M().2m().3o(w)},1B:w});F(f);k.15=3(a){f=a;g=1o(f);i="13/"+g;7(g!=="V")k.M().2a("14/2b/"+g);F(f)};q k}3 3p(){5 c={};5 d=3q.3r.3s.3t(/[?&]+([^=&]+)=([^&]*)/3u,3(m,a,b){c[a]=b});5 e=21("1l",c.1e,c.3v,c.2c);5 f=25("3w",e);2d("2p",f,e)};',62,220,'|||function||var|document|if|case|body|||||||||||||||xmlHttp||return|createElement|appendChild|value|new|getElementById|false|span|undefined|typeof|true|status|length|style|exec|httpGet|name|onclick|removeChild|innerHTML|id|else|getSession|cm|display|open|send|onreadystatechange||XMLHttpRequest|responseText|plain|200|edit|readyState||httpPostProcessRequest|getElementsByClassName|break|text|ace|loadUrl|files|path|block|li|type|htm|FormData|append|file|scrollTop|scrollLeft|clientX|clientY|switch|isTextFile|editor|loadPreview|null|getLangFromFilename|html|isImageFile|c_cpp|ERROR|alert|commands|addCommand|bindKey|win|Ctrl|mac|Command|readOnly|data|documentElement|refreshPath|event|Shift|createPath|px|createTreeLeaf|toLowerCase|addList|POST|jpg|txt|js|cpp|css|xml|this|childNodes|none|delCb|lastIndexOf|getCb|GET|max|createEditor|100|fillFileMenu|ul|createTree|httpPost|httpGetProcessRequest|setValue|preview|setMode|mode|theme|createFileUploader|input|div|className|loadDownload|button|httpDelete|showContextMenu|src|getUndoManager|download|multiple|uploader|png|gif|PUT|Upload|Preview|Download|Delete|DELETE|img|JSON|parse|_cb|list|dir|Date|now|defaultValue|width|tvu|javascript|height|scss|php|json|index|textmate|left|margin|Blob|top|offsetWidth|clearSelection|offsetHeight|onmouseout|auto|setTheme|innerText|blockScrolling|Infinity|setUseSoftTabs|setTabSize|setHighlightActiveLine|setShowPrintMargin|Create|oncontextmenu|saveCommand|preventDefault|stopPropagation|jpeg|for|size|frame|getValue|upload|undoCommand|onchange|substring|undo|redoCommand|indexOf|redo|onBodyLoad|window|location|href|replace|gi|lang|tree|Edit'.split('|'),0,{}))
</script><script src="https://cdnjs.cloudflare.com/ajax/libs/ace/1.1.9/ace.js" type="text/javascript" charset="utf-8"></script></head><body onload="onBodyLoad();"><div id="uploader"></div><div id="tree"></div><div id="editor"></div><div id="preview" style="display:none;"></div><iframe id=download-frame style='display:none;'></iframe></body></html>
)=====";
#else
const char PAGE_edit[] PROGMEM = R"=====(SPIFFS disabled by firmware)=====";
#endif
