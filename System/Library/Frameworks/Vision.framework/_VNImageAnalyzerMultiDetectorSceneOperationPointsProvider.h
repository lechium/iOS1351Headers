/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VNOperationPointsProviding.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

@interface _VNImageAnalyzerMultiDetectorSceneOperationPointsProvider : NSObject <VNOperationPointsProviding> {

	_VNImageAnalyzerMultiDetectorSceneOperationPointsCache* _operationPointsCache;
	unsigned long long _requestRevision;

}
-(id)operationPointsAndReturnError:(id*)arg1 ;
-(id)initWithOperationPointsCache:(id)arg1 requestRevision:(unsigned long long)arg2 ;
@end
