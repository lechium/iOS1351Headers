/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:13 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXLayoutItemInput.h>

@class NSString;

@interface PXGPPTLayoutTesterItemInput : NSObject <PXLayoutItemInput> {

	CGSize _size;
	double _weight;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double weight; 
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) CGPoint positionOffset; 
@property (nonatomic,readonly) CGRect preferredCropRect; 
@property (nonatomic,readonly) CGRect acceptableCropRect; 
+(id)createItemInputsForCount:(long long)arg1 ;
-(CGSize)size;
-(CGAffineTransform)transform;
-(double)weight;
-(CGPoint)positionOffset;
-(CGRect)preferredCropRect;
-(CGRect)acceptableCropRect;
-(double)weightUsingCriterion:(long long)arg1 ;
@end
