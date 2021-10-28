/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:23:05 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDocumentUIConfigurationModal.h>

@interface VUIDocumentUIConfigurationFormSheet : VUIDocumentUIConfigurationModal {

	BOOL _tapDissmissable;
	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;                                       //@synthesize preferredSize=_preferredSize - In the implementation block
@property (assign,getter=isTapDissmissable,nonatomic) BOOL tapDissmissable;              //@synthesize tapDissmissable=_tapDissmissable - In the implementation block
-(CGSize)preferredSize;
-(void)setPreferredSize:(CGSize)arg1 ;
-(BOOL)isTapDissmissable;
-(void)setTapDissmissable:(BOOL)arg1 ;
@end
