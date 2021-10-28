/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:37 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/BookCoverUtility.framework/BookCoverUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookCoverUtility/BookCoverUtility-Structs.h>
#import <libobjc.A.dylib/BCUSeriesCoverEffectsFilter.h>

@class NSString, BCULayerRenderer;

@interface _BCUCoverEffectsSeriesStack : NSObject <BCUSeriesCoverEffectsFilter> {

	NSString* _identifier;
	BCULayerRenderer* _renderer;

}

@property (nonatomic,readonly) BCULayerRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
-(NSString *)identifier;
-(BCULayerRenderer *)renderer;
-(id)_stackLayerWithImages:(id)arg1 filters:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 insets:(UIEdgeInsets*)arg5 path:(const CGPath*)arg6 ;
-(id)newOperationWithImages:(id)arg1 filters:(id)arg2 size:(CGSize)arg3 contentsScale:(double)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithIdentifier:(id)arg1 renderer:(id)arg2 ;
@end
