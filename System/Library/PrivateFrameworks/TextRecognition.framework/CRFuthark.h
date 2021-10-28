/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:00 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CRFuthark : NSObject
+(id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 ;
+(id)detectTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 withThresholdingAlgorithm:(long long)arg3 options:(id)arg4 ;
+(id)runFutharkOnImage:(id)arg1 recognizeFeatures:(BOOL)arg2 withMaxNumScales:(unsigned long long)arg3 withThresholdingAlgorithm:(long long)arg4 options:(id)arg5 withProgressHandler:(/*^block*/id)arg6 ;
+(id)runFutharkOnImage:(id)arg1 recognizeFeatures:(BOOL)arg2 options:(id)arg3 ;
+(id)detectTextInImage:(id)arg1 options:(id)arg2 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 ;
+(id)detectAndRecognizeTextInImage:(id)arg1 withMaxNumScales:(unsigned long long)arg2 options:(id)arg3 withProgressHandler:(/*^block*/id)arg4 ;
@end
