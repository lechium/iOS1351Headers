/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:10 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXNumberFilter.h>

@interface PXInitialHysteresisNumberFilter : PXNumberFilter {

	BOOL _didReachThreshold;
	double _offset;
	double _hysteresis;

}

@property (assign,nonatomic) double hysteresis;                      //@synthesize hysteresis=_hysteresis - In the implementation block
@property (nonatomic,readonly) double outputDerivative; 
-(double)hysteresis;
-(void)setHysteresis:(double)arg1 ;
-(double)outputDerivative;
-(double)updatedOutput;
@end
