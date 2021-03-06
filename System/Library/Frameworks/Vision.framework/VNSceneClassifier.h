/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:21 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelClassifier.h>
#import <libobjc.A.dylib/VNDetectorIdealImageSizeProviding.h>

@class NSString;

@interface VNSceneClassifier : VNEspressoModelClassifier <VNDetectorIdealImageSizeProviding> {

	shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>* _sceneClassifierHierarchicalModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configurationOptionKeysForDetectorKey;
+(id)supportedImageSizeSetForOptions:(id)arg1 ;
+(shared_ptr<vision::mod::ImageClassifierAbstract>*)createClassifierWithDescriptor:(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)arg1 classifierAbsolutePath:(const char*)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char*)arg5 options:(Options)arg6 ;
+(shared_ptr<vision::mod::ImageDescriptorProcessorAbstract>*)createDescriprorProcessorWithModelPath:(const char*)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(Options)arg5 ;
+(id)classifierResourceTypesToNamesForRevision:(unsigned long long)arg1 ;
+(Class)espressoModelImageprintClass;
+(id)returnAllResultsOptionKey;
+(id)createObservationWithDescriptors:(id)arg1 forRequestRevision:(unsigned long long)arg2 ;
+(void)initDumpDebugIntermediates:(id*)arg1 debugInfo:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)isSceneprinterCompatibleWithSceneprinterCreatedWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)initImageDescriptorBuffer:(id)arg1 descriptorBuffer:(shared_ptr<vision::mod::ImageDescriptorBufferAbstract>*)arg2 error:(id*)arg3 ;
-(id)labelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
@end

