/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:45 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoImaging/PhotoImaging-Structs.h>
@class PIReframeResult, PIStillReframerConfiguration, NSArray, VNSaliencyImageObservation, NSMutableArray, NURuleSystem, NSData;

@interface PIStillReframer : NSObject {

	BOOL _shouldAttemptReframe;
	BOOL _sceneContainsPet;
	BOOL _sceneContainsHuman;
	BOOL _sceneContainsMultipleSubjects;
	PIReframeResult* _result;
	PIStillReframerConfiguration* _configuration;
	NSArray* _ANODSubjects;
	VNSaliencyImageObservation* _saliencyObservation;
	NSMutableArray* _mutableSubjects;
	NURuleSystem* _ruleSystem;
	CGRect _overscanBounds;
	CGRect _viewBounds;

}

@property (nonatomic,readonly) BOOL shouldAttemptReframe;                                     //@synthesize shouldAttemptReframe=_shouldAttemptReframe - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * mutableSubjects;                         //@synthesize mutableSubjects=_mutableSubjects - In the implementation block
@property (nonatomic,readonly) NURuleSystem * ruleSystem;                                     //@synthesize ruleSystem=_ruleSystem - In the implementation block
@property (assign,nonatomic) BOOL sceneContainsPet;                                           //@synthesize sceneContainsPet=_sceneContainsPet - In the implementation block
@property (assign,nonatomic) BOOL sceneContainsHuman;                                         //@synthesize sceneContainsHuman=_sceneContainsHuman - In the implementation block
@property (assign,nonatomic) BOOL sceneContainsMultipleSubjects;                              //@synthesize sceneContainsMultipleSubjects=_sceneContainsMultipleSubjects - In the implementation block
@property (nonatomic,readonly) PIStillReframerConfiguration * configuration;                  //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CGRect overscanBounds;                                         //@synthesize overscanBounds=_overscanBounds - In the implementation block
@property (nonatomic,readonly) CGRect viewBounds;                                             //@synthesize viewBounds=_viewBounds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ANODSubjects;                                   //@synthesize ANODSubjects=_ANODSubjects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subjects; 
@property (nonatomic,readonly) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,readonly) PIReframeResult * result;                                      //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSData * evaluationData; 
+(id)defaultConfiguration;
+(id)keyForSubjectWithIndex:(unsigned long long)arg1 prefix:(id)arg2 ;
+(unsigned long long)subjectDirectionForImageOrientation:(long long)arg1 ;
+(id)detectedSubjectsForImage:(id)arg1 context:(id)arg2 ;
-(PIReframeResult *)result;
-(PIStillReframerConfiguration *)configuration;
-(VNSaliencyImageObservation *)saliencyObservation;
-(void)invalidateCaches;
-(CGRect)viewBounds;
-(NSArray *)ANODSubjects;
-(NSArray *)subjects;
-(id)initWithConfiguration:(id)arg1 expandedSubjectConfiguration:(id)arg2 overscanBounds:(CGRect)arg3 viewBounds:(CGRect)arg4 image:(id)arg5 ;
-(id)initWithConfiguration:(id)arg1 overscanBounds:(CGRect)arg2 viewBounds:(CGRect)arg3 subjects:(id)arg4 ;
-(NSData *)evaluationData;
-(CGRect)calculateReframedRect;
-(BOOL)canIncludeSubject:(id)arg1 boundsPercentageInside:(double*)arg2 expandedBoundsPercentageInside:(double*)arg3 ;
-(CGRect)clamppedSubjectBoundsForEdgeBleed:(id)arg1 ;
-(CGRect)candidateRectForSubject:(id)arg1 ;
-(double)amountOfOverscanUsedByRect:(CGRect)arg1 ;
-(BOOL)shouldAllowCandidateRect:(CGRect)arg1 forUnwantedSubjects:(id)arg2 ;
-(double)confidenceWithBounds:(CGRect)arg1 ;
-(CGRect)overscanBounds;
-(BOOL)shouldAttemptReframe;
-(NSMutableArray *)mutableSubjects;
-(NURuleSystem *)ruleSystem;
-(BOOL)sceneContainsPet;
-(void)setSceneContainsPet:(BOOL)arg1 ;
-(BOOL)sceneContainsHuman;
-(void)setSceneContainsHuman:(BOOL)arg1 ;
-(BOOL)sceneContainsMultipleSubjects;
-(void)setSceneContainsMultipleSubjects:(BOOL)arg1 ;
@end

