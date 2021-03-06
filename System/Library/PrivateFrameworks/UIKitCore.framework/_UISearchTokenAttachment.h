/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:58 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class _UISearchTokenAttachmentViewProvider, UISearchToken;

@interface _UISearchTokenAttachment : NSTextAttachment {

	_UISearchTokenAttachmentViewProvider* _viewProvider;
	UISearchToken* _token;

}

@property (nonatomic,readonly) _UISearchTokenAttachmentViewProvider * _viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (nonatomic,readonly) UISearchToken * token;                                             //@synthesize token=_token - In the implementation block
-(id)init;
-(UISearchToken *)token;
-(id)initWithToken:(id)arg1 ;
-(BOOL)usesTextAttachmentView;
-(id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3 ;
-(void)placeView:(id)arg1 withFrame:(CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5 ;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
-(id)initWithData:(id)arg1 ofType:(id)arg2 ;
-(void)detachView:(id)arg1 fromParentView:(id)arg2 ;
-(_UISearchTokenAttachmentViewProvider *)_viewProvider;
@end

