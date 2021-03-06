/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:42 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NewsUI/NewsUI-Structs.h>
@interface NULayoutResolver : NSObject {

	NULayoutOptions _options;

}

@property (nonatomic,readonly) NULayoutOptions options;              //@synthesize options=_options - In the implementation block
-(NULayoutOptions)options;
-(id)initWithOptions:(NULayoutOptions)arg1 ;
-(void)layoutComponents:(id)arg1 inBounds:(CGRect)arg2 originOffset:(CGPoint)arg3 layoutContext:(id)arg4 ;
-(UIEdgeInsets)adjustedEdgeInsetsForOptions:(NULayoutOptions)arg1 ;
-(id)adjustedComponentsForComponents:(id)arg1 options:(NULayoutOptions)arg2 ;
@end

