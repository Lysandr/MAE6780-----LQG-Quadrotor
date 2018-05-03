  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 70;
      section.data(70)  = dumData; %prealloc
      
	  ;% rtP.Ixx
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Iyy
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Izz
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Jr
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.K
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtP.L
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 68;
	
	  ;% rtP.Tau
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 69;
	
	  ;% rtP.V1_WP
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 70;
	
	  ;% rtP.V2_WP
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 71;
	
	  ;% rtP.V3_WP
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 72;
	
	  ;% rtP.V4_WP
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 73;
	
	  ;% rtP.c_mi_x
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 74;
	
	  ;% rtP.c_mi_y
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 75;
	
	  ;% rtP.c_mi_z
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 76;
	
	  ;% rtP.co_x
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 77;
	
	  ;% rtP.co_y
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 78;
	
	  ;% rtP.co_z
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 79;
	
	  ;% rtP.d_omega_R10
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 80;
	
	  ;% rtP.d_omega_R20
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 81;
	
	  ;% rtP.d_omega_R30
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 82;
	
	  ;% rtP.d_omega_R40
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 83;
	
	  ;% rtP.dfi_0
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 84;
	
	  ;% rtP.dpsi_0
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 85;
	
	  ;% rtP.dtheta_0
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 86;
	
	  ;% rtP.dx_0
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 87;
	
	  ;% rtP.dy_0
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 88;
	
	  ;% rtP.dz_0
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 89;
	
	  ;% rtP.fi_0
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 90;
	
	  ;% rtP.ga
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 91;
	
	  ;% rtP.m
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 92;
	
	  ;% rtP.psi_0
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 93;
	
	  ;% rtP.stateref
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 94;
	
	  ;% rtP.theta_0
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 110;
	
	  ;% rtP.x_0
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 111;
	
	  ;% rtP.y_0
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 112;
	
	  ;% rtP.z_0
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 113;
	
	  ;% rtP.Int_dx_UpperSat
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 114;
	
	  ;% rtP.Int_dx_LowerSat
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 115;
	
	  ;% rtP.Int_dy_UpperSat
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 116;
	
	  ;% rtP.Int_dy_LowerSat
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 117;
	
	  ;% rtP.Int_dz_UpperSat
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 118;
	
	  ;% rtP.Int_dz_LowerSat
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 119;
	
	  ;% rtP.Saturation4_UpperSat
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 120;
	
	  ;% rtP.Saturation4_LowerSat
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 121;
	
	  ;% rtP.Saturation4_UpperSat_h0v3pz2g5e
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 122;
	
	  ;% rtP.Saturation4_LowerSat_gy3tebytcm
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 123;
	
	  ;% rtP.Saturation4_UpperSat_hzhi3ky35l
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 124;
	
	  ;% rtP.Saturation4_LowerSat_jrjqdhefgm
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 125;
	
	  ;% rtP.Saturation4_UpperSat_e4islxddmg
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 126;
	
	  ;% rtP.Saturation4_LowerSat_eokc4vgvhv
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 127;
	
	  ;% rtP.Saturation3_UpperSat
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 128;
	
	  ;% rtP.Saturation3_LowerSat
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 129;
	
	  ;% rtP.Saturation3_UpperSat_bsq3lnifj4
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 130;
	
	  ;% rtP.Saturation3_LowerSat_ikv1cw5k2t
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 131;
	
	  ;% rtP.Saturation3_UpperSat_etj5umigle
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 132;
	
	  ;% rtP.Saturation3_LowerSat_czlw4uugdp
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 133;
	
	  ;% rtP.Saturation3_UpperSat_ibvqhf1uwi
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 134;
	
	  ;% rtP.Saturation3_LowerSat_itkhn4lksx
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 135;
	
	  ;% rtP.Saturation8_UpperSat
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 136;
	
	  ;% rtP.Saturation8_LowerSat
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 137;
	
	  ;% rtP.Saturation8_UpperSat_ivnhhtjl1t
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 138;
	
	  ;% rtP.Saturation8_LowerSat_m0gx2ayxie
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 139;
	
	  ;% rtP.Saturation8_UpperSat_jtahv23i3q
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 140;
	
	  ;% rtP.Saturation8_LowerSat_kqwcbf42bl
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 141;
	
	  ;% rtP.Saturation8_UpperSat_pqzwkmp3ln
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 142;
	
	  ;% rtP.Saturation8_LowerSat_cdlagjspwp
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 143;
	
	  ;% rtP.V1_WP_Time
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 144;
	
	  ;% rtP.V2_WP_Time
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 145;
	
	  ;% rtP.V3_WP_Time
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 146;
	
	  ;% rtP.V4_WP_Time
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 147;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 53;
      section.data(53)  = dumData; %prealloc
      
	  ;% rtB.le5ctscxhr
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.cbd1jisbzs
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.mtss1t4ese
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.bdfulujwps
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.ktattksosw
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.cm13zakw1m
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.gf2awefhcg
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtB.iwwwna3wpy
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtB.lab5qdszn2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtB.ngjxi4neqa
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtB.hdgyrvx3s5
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtB.ckbpwhkuob
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtB.enmiubotat
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtB.gbb5qnoror
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtB.dp1mnubey0
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtB.fsywf0hq1r
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtB.icy11govsb
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtB.pmnih4o00w
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtB.ctpkxivim5
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% rtB.p2pplosrht
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% rtB.lrhkveetji
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% rtB.kp5mv2rlo4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% rtB.ae4dv4izel
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% rtB.bvbonmsp00
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% rtB.m2u5tpfjkr
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% rtB.ktszyhjg23
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% rtB.hc302at03e
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% rtB.jnardyy1id
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% rtB.h3xuknejsc
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% rtB.dtmggwb1du
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% rtB.ih00fqirlm
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% rtB.lpvfihydgk
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% rtB.p0trcmhycu
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% rtB.jy3jw2aaps
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% rtB.edf3zdrk1s
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% rtB.lbff3pxttp
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% rtB.inhjzmnieg
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% rtB.mj4up1ypwq
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% rtB.j05trt3bmi
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% rtB.aa4upzmaz2
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% rtB.hdvk5b1vox
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% rtB.a3xgmxzh1z
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% rtB.hfkq4552dr
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% rtB.ahbpwd431t
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% rtB.nopngpsq2v
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% rtB.c5045fm0r3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% rtB.fup13t4pag
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 46;
	
	  ;% rtB.mtq4y2sxeq
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 47;
	
	  ;% rtB.dupb4l5q02
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 48;
	
	  ;% rtB.lrrxi4kf0d
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 49;
	
	  ;% rtB.nkbtbu2dxp
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 50;
	
	  ;% rtB.o00lpn04dj
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 51;
	
	  ;% rtB.fcgqdb23w4
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 52;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 11;
      section.data(11)  = dumData; %prealloc
      
	  ;% rtDW.aovbeqswtf.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ptasfmopxm.LoggedData
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtDW.hxty2dhbhw.LoggedData
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 5;
	
	  ;% rtDW.jq3ht4ldwz.LoggedData
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtDW.mnwetukxha.LoggedData
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% rtDW.g2524xom2x.LoggedData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% rtDW.n4tojbgvnq.LoggedData
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 9;
	
	  ;% rtDW.hmn01bl5et.LoggedData
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 10;
	
	  ;% rtDW.nax0puf5q5.LoggedData
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 11;
	
	  ;% rtDW.ijh41x30am.LoggedData
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 12;
	
	  ;% rtDW.k0dxhvpog3.LoggedData
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 19;
      section.data(19)  = dumData; %prealloc
      
	  ;% rtDW.ov0tta154u
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cb5neuimdg
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.lhi0q2cqgq
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.ldjqojcec1
	  section.data(4).logicalSrcIdx = 14;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.ptr2yrursc
	  section.data(5).logicalSrcIdx = 15;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.hmddz0hhbx
	  section.data(6).logicalSrcIdx = 16;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.dhdcay24db
	  section.data(7).logicalSrcIdx = 17;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.d3wh4cztop
	  section.data(8).logicalSrcIdx = 18;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.p4xyyqaszr
	  section.data(9).logicalSrcIdx = 19;
	  section.data(9).dtTransOffset = 8;
	
	  ;% rtDW.owy3xymafw
	  section.data(10).logicalSrcIdx = 20;
	  section.data(10).dtTransOffset = 9;
	
	  ;% rtDW.mgrscpln2p
	  section.data(11).logicalSrcIdx = 21;
	  section.data(11).dtTransOffset = 10;
	
	  ;% rtDW.cxmnq1njjp
	  section.data(12).logicalSrcIdx = 22;
	  section.data(12).dtTransOffset = 11;
	
	  ;% rtDW.dtyta1szku
	  section.data(13).logicalSrcIdx = 23;
	  section.data(13).dtTransOffset = 12;
	
	  ;% rtDW.kfd22jojmu
	  section.data(14).logicalSrcIdx = 24;
	  section.data(14).dtTransOffset = 13;
	
	  ;% rtDW.dzliwdnuer
	  section.data(15).logicalSrcIdx = 25;
	  section.data(15).dtTransOffset = 14;
	
	  ;% rtDW.lr2av0l5k0
	  section.data(16).logicalSrcIdx = 26;
	  section.data(16).dtTransOffset = 15;
	
	  ;% rtDW.fe5ybxckcc
	  section.data(17).logicalSrcIdx = 27;
	  section.data(17).dtTransOffset = 16;
	
	  ;% rtDW.fpzzt015dv
	  section.data(18).logicalSrcIdx = 28;
	  section.data(18).dtTransOffset = 17;
	
	  ;% rtDW.cw5k42v0ig
	  section.data(19).logicalSrcIdx = 29;
	  section.data(19).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2736249441;
  targMap.checksum1 = 680407911;
  targMap.checksum2 = 4145678026;
  targMap.checksum3 = 3505881777;

