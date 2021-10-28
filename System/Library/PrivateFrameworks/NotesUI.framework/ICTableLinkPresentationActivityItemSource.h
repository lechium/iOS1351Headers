/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:47 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesUI/ICLinkPresentationActivityItemSource.h>

@class ICAttachment;

@interface ICTableLinkPresentationActivityItemSource : ICLinkPresentationActivityItemSource {

	ICAttachment* _attachment;

}

@property (retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)init;
-(id)title;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(id)detail;
@end
