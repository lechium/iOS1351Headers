/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /usr/lib/libPPMDataModel.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libPPMDataModel.dylib/libPPMDataModel.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OTAResistanceData, OTABMUResistance;

@interface OTAParamRC : PBCodable <NSCopying> {

	SCD_Struct_OT1* _agingCoeffForR0TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForR0s;
	SCD_Struct_OT1* _agingCoeffForR1TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForR1s;
	SCD_Struct_OT1* _agingCoeffForR2TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForR2s;
	SCD_Struct_OT1* _agingCoeffForR3TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForR3s;
	SCD_Struct_OT1* _agingCoeffForRCFreq1TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForRCFreq1s;
	SCD_Struct_OT1* _agingCoeffForRCFreq2TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForRCFreq2s;
	SCD_Struct_OT1* _agingCoeffForRCFreq3TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForRCFreq3s;
	SCD_Struct_OT1* _agingCoeffForRCFreq4TemperatureCoeffs;
	SCD_Struct_OT1* _agingCoeffForRCFreq4s;
	SCD_Struct_OT1* _baselineRdcs;
	SCD_Struct_OT1* _gridOCVs;
	SCD_Struct_OT1* _slopeForR0Extraps;
	SCD_Struct_OT1* _slopeForR1Extraps;
	SCD_Struct_OT1* _slopeForR2Extraps;
	SCD_Struct_OT1* _slopeForR3Extraps;
	OTAResistanceData* _baselineR0;
	OTAResistanceData* _baselineR1;
	OTAResistanceData* _baselineR2;
	OTAResistanceData* _baselineR3;
	OTAResistanceData* _baselineR4;
	OTAResistanceData* _baselineRCFreq1;
	OTAResistanceData* _baselineRCFreq2;
	OTAResistanceData* _baselineRCFreq3;
	OTAResistanceData* _baselineRCFreq4;
	float _baselineWRdc;
	OTABMUResistance* _bmuResistance;
	unsigned _chemID;
	int _mLBConfig;
	float _maxRdcRatio;
	float _maxRdcRatioR2Extrap;
	OTAResistanceData* _r0;
	OTAResistanceData* _r1;
	OTAResistanceData* _r2;
	OTAResistanceData* _r3;
	OTAResistanceData* _rCFreq1;
	OTAResistanceData* _rCFreq2;
	OTAResistanceData* _rCFreq3;
	OTAResistanceData* _rCFreq4;
	SCD_Struct_OT2 _has;

}

@property (nonatomic,readonly) BOOL hasR0; 
@property (nonatomic,retain) OTAResistanceData * r0;                                                       //@synthesize r0=_r0 - In the implementation block
@property (nonatomic,readonly) BOOL hasR1; 
@property (nonatomic,retain) OTAResistanceData * r1;                                                       //@synthesize r1=_r1 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineR1; 
@property (nonatomic,retain) OTAResistanceData * baselineR1;                                               //@synthesize baselineR1=_baselineR1 - In the implementation block
@property (nonatomic,readonly) BOOL hasR2; 
@property (nonatomic,retain) OTAResistanceData * r2;                                                       //@synthesize r2=_r2 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineR2; 
@property (nonatomic,retain) OTAResistanceData * baselineR2;                                               //@synthesize baselineR2=_baselineR2 - In the implementation block
@property (nonatomic,readonly) BOOL hasRCFreq1; 
@property (nonatomic,retain) OTAResistanceData * rCFreq1;                                                  //@synthesize rCFreq1=_rCFreq1 - In the implementation block
@property (nonatomic,readonly) BOOL hasRCFreq2; 
@property (nonatomic,retain) OTAResistanceData * rCFreq2;                                                  //@synthesize rCFreq2=_rCFreq2 - In the implementation block
@property (nonatomic,readonly) BOOL hasRCFreq3; 
@property (nonatomic,retain) OTAResistanceData * rCFreq3;                                                  //@synthesize rCFreq3=_rCFreq3 - In the implementation block
@property (nonatomic,readonly) unsigned long long agingCoeffForR0sCount; 
@property (nonatomic,readonly) float* agingCoeffForR0s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForR0TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForR0TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long agingCoeffForR1sCount; 
@property (nonatomic,readonly) float* agingCoeffForR1s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForR1TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForR1TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long agingCoeffForR2sCount; 
@property (nonatomic,readonly) float* agingCoeffForR2s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForR2TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForR2TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long baselineRdcsCount; 
@property (nonatomic,readonly) float* baselineRdcs; 
@property (nonatomic,readonly) BOOL hasBaselineR0; 
@property (nonatomic,retain) OTAResistanceData * baselineR0;                                               //@synthesize baselineR0=_baselineR0 - In the implementation block
@property (nonatomic,readonly) BOOL hasBmuResistance; 
@property (nonatomic,retain) OTABMUResistance * bmuResistance;                                             //@synthesize bmuResistance=_bmuResistance - In the implementation block
@property (assign,nonatomic) unsigned chemID;                                                              //@synthesize chemID=_chemID - In the implementation block
@property (nonatomic,readonly) unsigned long long gridOCVsCount; 
@property (nonatomic,readonly) float* gridOCVs; 
@property (nonatomic,readonly) BOOL hasBaselineR3; 
@property (nonatomic,retain) OTAResistanceData * baselineR3;                                               //@synthesize baselineR3=_baselineR3 - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRdcRatio; 
@property (assign,nonatomic) float maxRdcRatio;                                                            //@synthesize maxRdcRatio=_maxRdcRatio - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRdcRatioR2Extrap; 
@property (assign,nonatomic) float maxRdcRatioR2Extrap;                                                    //@synthesize maxRdcRatioR2Extrap=_maxRdcRatioR2Extrap - In the implementation block
@property (assign,nonatomic) BOOL hasBaselineWRdc; 
@property (assign,nonatomic) float baselineWRdc;                                                           //@synthesize baselineWRdc=_baselineWRdc - In the implementation block
@property (nonatomic,readonly) unsigned long long slopeForR0ExtrapsCount; 
@property (nonatomic,readonly) float* slopeForR0Extraps; 
@property (nonatomic,readonly) unsigned long long slopeForR1ExtrapsCount; 
@property (nonatomic,readonly) float* slopeForR1Extraps; 
@property (nonatomic,readonly) unsigned long long slopeForR2ExtrapsCount; 
@property (nonatomic,readonly) float* slopeForR2Extraps; 
@property (nonatomic,readonly) unsigned long long slopeForR3ExtrapsCount; 
@property (nonatomic,readonly) float* slopeForR3Extraps; 
@property (nonatomic,readonly) BOOL hasR3; 
@property (nonatomic,retain) OTAResistanceData * r3;                                                       //@synthesize r3=_r3 - In the implementation block
@property (nonatomic,readonly) BOOL hasRCFreq4; 
@property (nonatomic,retain) OTAResistanceData * rCFreq4;                                                  //@synthesize rCFreq4=_rCFreq4 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineR4; 
@property (nonatomic,retain) OTAResistanceData * baselineR4;                                               //@synthesize baselineR4=_baselineR4 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineRCFreq1; 
@property (nonatomic,retain) OTAResistanceData * baselineRCFreq1;                                          //@synthesize baselineRCFreq1=_baselineRCFreq1 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineRCFreq2; 
@property (nonatomic,retain) OTAResistanceData * baselineRCFreq2;                                          //@synthesize baselineRCFreq2=_baselineRCFreq2 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineRCFreq3; 
@property (nonatomic,retain) OTAResistanceData * baselineRCFreq3;                                          //@synthesize baselineRCFreq3=_baselineRCFreq3 - In the implementation block
@property (nonatomic,readonly) BOOL hasBaselineRCFreq4; 
@property (nonatomic,retain) OTAResistanceData * baselineRCFreq4;                                          //@synthesize baselineRCFreq4=_baselineRCFreq4 - In the implementation block
@property (nonatomic,readonly) unsigned long long agingCoeffForR3sCount; 
@property (nonatomic,readonly) float* agingCoeffForR3s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForR3TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForR3TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq1sCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq1s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq2sCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq2s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq3sCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq3s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq4sCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq4s; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq1TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq1TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq2TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq2TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq3TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq3TemperatureCoeffs; 
@property (nonatomic,readonly) unsigned long long agingCoeffForRCFreq4TemperatureCoeffsCount; 
@property (nonatomic,readonly) float* agingCoeffForRCFreq4TemperatureCoeffs; 
@property (assign,nonatomic) BOOL hasMLBConfig; 
@property (assign,nonatomic) int mLBConfig;                                                                //@synthesize mLBConfig=_mLBConfig - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setR0:(OTAResistanceData *)arg1 ;
-(void)setR1:(OTAResistanceData *)arg1 ;
-(void)setBaselineR1:(OTAResistanceData *)arg1 ;
-(void)setR2:(OTAResistanceData *)arg1 ;
-(void)setBaselineR2:(OTAResistanceData *)arg1 ;
-(void)setRCFreq1:(OTAResistanceData *)arg1 ;
-(void)setRCFreq2:(OTAResistanceData *)arg1 ;
-(void)setRCFreq3:(OTAResistanceData *)arg1 ;
-(unsigned long long)agingCoeffForR0sCount;
-(void)clearAgingCoeffForR0s;
-(float)agingCoeffForR0AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR0:(float)arg1 ;
-(unsigned long long)agingCoeffForR0TemperatureCoeffsCount;
-(void)clearAgingCoeffForR0TemperatureCoeffs;
-(float)agingCoeffForR0TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR0TemperatureCoeff:(float)arg1 ;
-(unsigned long long)agingCoeffForR1sCount;
-(void)clearAgingCoeffForR1s;
-(float)agingCoeffForR1AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR1:(float)arg1 ;
-(unsigned long long)agingCoeffForR1TemperatureCoeffsCount;
-(void)clearAgingCoeffForR1TemperatureCoeffs;
-(float)agingCoeffForR1TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR1TemperatureCoeff:(float)arg1 ;
-(unsigned long long)agingCoeffForR2sCount;
-(void)clearAgingCoeffForR2s;
-(float)agingCoeffForR2AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR2:(float)arg1 ;
-(unsigned long long)agingCoeffForR2TemperatureCoeffsCount;
-(void)clearAgingCoeffForR2TemperatureCoeffs;
-(float)agingCoeffForR2TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR2TemperatureCoeff:(float)arg1 ;
-(unsigned long long)baselineRdcsCount;
-(void)clearBaselineRdcs;
-(float)baselineRdcAtIndex:(unsigned long long)arg1 ;
-(void)addBaselineRdc:(float)arg1 ;
-(void)setBaselineR0:(OTAResistanceData *)arg1 ;
-(void)setBmuResistance:(OTABMUResistance *)arg1 ;
-(unsigned long long)gridOCVsCount;
-(void)clearGridOCVs;
-(float)gridOCVAtIndex:(unsigned long long)arg1 ;
-(void)addGridOCV:(float)arg1 ;
-(void)setBaselineR3:(OTAResistanceData *)arg1 ;
-(unsigned long long)slopeForR0ExtrapsCount;
-(void)clearSlopeForR0Extraps;
-(float)slopeForR0ExtrapAtIndex:(unsigned long long)arg1 ;
-(void)addSlopeForR0Extrap:(float)arg1 ;
-(unsigned long long)slopeForR1ExtrapsCount;
-(void)clearSlopeForR1Extraps;
-(float)slopeForR1ExtrapAtIndex:(unsigned long long)arg1 ;
-(void)addSlopeForR1Extrap:(float)arg1 ;
-(unsigned long long)slopeForR2ExtrapsCount;
-(void)clearSlopeForR2Extraps;
-(float)slopeForR2ExtrapAtIndex:(unsigned long long)arg1 ;
-(void)addSlopeForR2Extrap:(float)arg1 ;
-(unsigned long long)slopeForR3ExtrapsCount;
-(void)clearSlopeForR3Extraps;
-(float)slopeForR3ExtrapAtIndex:(unsigned long long)arg1 ;
-(void)addSlopeForR3Extrap:(float)arg1 ;
-(void)setR3:(OTAResistanceData *)arg1 ;
-(void)setRCFreq4:(OTAResistanceData *)arg1 ;
-(void)setBaselineR4:(OTAResistanceData *)arg1 ;
-(void)setBaselineRCFreq1:(OTAResistanceData *)arg1 ;
-(void)setBaselineRCFreq2:(OTAResistanceData *)arg1 ;
-(void)setBaselineRCFreq3:(OTAResistanceData *)arg1 ;
-(void)setBaselineRCFreq4:(OTAResistanceData *)arg1 ;
-(unsigned long long)agingCoeffForR3sCount;
-(void)clearAgingCoeffForR3s;
-(float)agingCoeffForR3AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR3:(float)arg1 ;
-(unsigned long long)agingCoeffForR3TemperatureCoeffsCount;
-(void)clearAgingCoeffForR3TemperatureCoeffs;
-(float)agingCoeffForR3TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForR3TemperatureCoeff:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq1sCount;
-(void)clearAgingCoeffForRCFreq1s;
-(float)agingCoeffForRCFreq1AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq1:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq2sCount;
-(void)clearAgingCoeffForRCFreq2s;
-(float)agingCoeffForRCFreq2AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq2:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq3sCount;
-(void)clearAgingCoeffForRCFreq3s;
-(float)agingCoeffForRCFreq3AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq3:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq4sCount;
-(void)clearAgingCoeffForRCFreq4s;
-(float)agingCoeffForRCFreq4AtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq4:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq1TemperatureCoeffsCount;
-(void)clearAgingCoeffForRCFreq1TemperatureCoeffs;
-(float)agingCoeffForRCFreq1TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq1TemperatureCoeff:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq2TemperatureCoeffsCount;
-(void)clearAgingCoeffForRCFreq2TemperatureCoeffs;
-(float)agingCoeffForRCFreq2TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq2TemperatureCoeff:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq3TemperatureCoeffsCount;
-(void)clearAgingCoeffForRCFreq3TemperatureCoeffs;
-(float)agingCoeffForRCFreq3TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq3TemperatureCoeff:(float)arg1 ;
-(unsigned long long)agingCoeffForRCFreq4TemperatureCoeffsCount;
-(void)clearAgingCoeffForRCFreq4TemperatureCoeffs;
-(float)agingCoeffForRCFreq4TemperatureCoeffAtIndex:(unsigned long long)arg1 ;
-(void)addAgingCoeffForRCFreq4TemperatureCoeff:(float)arg1 ;
-(BOOL)hasR0;
-(BOOL)hasR1;
-(BOOL)hasBaselineR1;
-(BOOL)hasR2;
-(BOOL)hasBaselineR2;
-(BOOL)hasRCFreq1;
-(BOOL)hasRCFreq2;
-(BOOL)hasRCFreq3;
-(float*)agingCoeffForR0s;
-(void)setAgingCoeffForR0s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForR0TemperatureCoeffs;
-(void)setAgingCoeffForR0TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForR1s;
-(void)setAgingCoeffForR1s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForR1TemperatureCoeffs;
-(void)setAgingCoeffForR1TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForR2s;
-(void)setAgingCoeffForR2s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForR2TemperatureCoeffs;
-(void)setAgingCoeffForR2TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)baselineRdcs;
-(void)setBaselineRdcs:(float*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasBaselineR0;
-(BOOL)hasBmuResistance;
-(float*)gridOCVs;
-(void)setGridOCVs:(float*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasBaselineR3;
-(void)setMaxRdcRatio:(float)arg1 ;
-(void)setHasMaxRdcRatio:(BOOL)arg1 ;
-(BOOL)hasMaxRdcRatio;
-(void)setMaxRdcRatioR2Extrap:(float)arg1 ;
-(void)setHasMaxRdcRatioR2Extrap:(BOOL)arg1 ;
-(BOOL)hasMaxRdcRatioR2Extrap;
-(void)setBaselineWRdc:(float)arg1 ;
-(void)setHasBaselineWRdc:(BOOL)arg1 ;
-(BOOL)hasBaselineWRdc;
-(float*)slopeForR0Extraps;
-(void)setSlopeForR0Extraps:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)slopeForR1Extraps;
-(void)setSlopeForR1Extraps:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)slopeForR2Extraps;
-(void)setSlopeForR2Extraps:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)slopeForR3Extraps;
-(void)setSlopeForR3Extraps:(float*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasR3;
-(BOOL)hasRCFreq4;
-(BOOL)hasBaselineR4;
-(BOOL)hasBaselineRCFreq1;
-(BOOL)hasBaselineRCFreq2;
-(BOOL)hasBaselineRCFreq3;
-(BOOL)hasBaselineRCFreq4;
-(float*)agingCoeffForR3s;
-(void)setAgingCoeffForR3s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForR3TemperatureCoeffs;
-(void)setAgingCoeffForR3TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq1s;
-(void)setAgingCoeffForRCFreq1s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq2s;
-(void)setAgingCoeffForRCFreq2s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq3s;
-(void)setAgingCoeffForRCFreq3s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq4s;
-(void)setAgingCoeffForRCFreq4s:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq1TemperatureCoeffs;
-(void)setAgingCoeffForRCFreq1TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq2TemperatureCoeffs;
-(void)setAgingCoeffForRCFreq2TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq3TemperatureCoeffs;
-(void)setAgingCoeffForRCFreq3TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)agingCoeffForRCFreq4TemperatureCoeffs;
-(void)setAgingCoeffForRCFreq4TemperatureCoeffs:(float*)arg1 count:(unsigned long long)arg2 ;
-(int)mLBConfig;
-(void)setMLBConfig:(int)arg1 ;
-(void)setHasMLBConfig:(BOOL)arg1 ;
-(BOOL)hasMLBConfig;
-(id)mLBConfigAsString:(int)arg1 ;
-(int)StringAsMLBConfig:(id)arg1 ;
-(OTAResistanceData *)r0;
-(OTAResistanceData *)r1;
-(OTAResistanceData *)baselineR1;
-(OTAResistanceData *)r2;
-(OTAResistanceData *)baselineR2;
-(OTAResistanceData *)rCFreq1;
-(OTAResistanceData *)rCFreq2;
-(OTAResistanceData *)rCFreq3;
-(OTAResistanceData *)baselineR0;
-(OTABMUResistance *)bmuResistance;
-(unsigned)chemID;
-(void)setChemID:(unsigned)arg1 ;
-(OTAResistanceData *)baselineR3;
-(float)maxRdcRatio;
-(float)maxRdcRatioR2Extrap;
-(float)baselineWRdc;
-(OTAResistanceData *)r3;
-(OTAResistanceData *)rCFreq4;
-(OTAResistanceData *)baselineR4;
-(OTAResistanceData *)baselineRCFreq1;
-(OTAResistanceData *)baselineRCFreq2;
-(OTAResistanceData *)baselineRCFreq3;
-(OTAResistanceData *)baselineRCFreq4;
@end

