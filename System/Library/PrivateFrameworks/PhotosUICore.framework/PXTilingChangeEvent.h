/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXTilingLayout, PXTilingLayoutInvalidationContext;

@interface PXTilingChangeEvent : NSObject {

	long long _type;
	PXTilingLayout* _layout;
	PXTilingLayoutInvalidationContext* _context;
	CGSize _referenceSize;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) long long type;                                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PXTilingLayout * layout;                                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                     //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets contentInset;                                //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) PXTilingLayoutInvalidationContext * context;              //@synthesize context=_context - In the implementation block
-(id)init;
-(id)description;
-(long long)type;
-(PXTilingLayoutInvalidationContext *)context;
-(PXTilingLayout *)layout;
-(UIEdgeInsets)contentInset;
-(CGSize)referenceSize;
-(id)initWithChangeToLayout:(id)arg1 ;
-(id)initWithChangeToReferenceSize:(CGSize)arg1 ;
-(id)initWithChangeToContentInset:(UIEdgeInsets)arg1 ;
-(id)initWithCoordinateSpaceChange;
-(id)initWithLayoutInvalidationContext:(id)arg1 ;
@end

