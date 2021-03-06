/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSString;

@interface VNDetectTextRectanglesRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _reportCharacterBoxes;
	BOOL _detectDiacritics;
	BOOL _minimizeFalseDetections;
	unsigned long long _algorithm;
	unsigned long long _minimumCharacterPixelHeight;
	NSString* _textRecognition;

}

@property (assign,nonatomic) BOOL reportCharacterBoxes;                                   //@synthesize reportCharacterBoxes=_reportCharacterBoxes - In the implementation block
@property (assign,nonatomic) unsigned long long algorithm;                                //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic) unsigned long long minimumCharacterPixelHeight;              //@synthesize minimumCharacterPixelHeight=_minimumCharacterPixelHeight - In the implementation block
@property (assign,nonatomic) BOOL detectDiacritics;                                       //@synthesize detectDiacritics=_detectDiacritics - In the implementation block
@property (assign,nonatomic) BOOL minimizeFalseDetections;                                //@synthesize minimizeFalseDetections=_minimizeFalseDetections - In the implementation block
@property (nonatomic,copy) NSString * textRecognition;                                    //@synthesize textRecognition=_textRecognition - In the implementation block
-(void)setDetectDiacritics:(BOOL)arg1 ;
-(void)setMinimizeFalseDetections:(BOOL)arg1 ;
-(unsigned long long)algorithm;
-(void)setAlgorithm:(unsigned long long)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(BOOL)reportCharacterBoxes;
-(void)setReportCharacterBoxes:(BOOL)arg1 ;
-(unsigned long long)minimumCharacterPixelHeight;
-(void)setMinimumCharacterPixelHeight:(unsigned long long)arg1 ;
-(BOOL)detectDiacritics;
-(BOOL)minimizeFalseDetections;
-(NSString *)textRecognition;
-(void)setTextRecognition:(NSString *)arg1 ;
@end

