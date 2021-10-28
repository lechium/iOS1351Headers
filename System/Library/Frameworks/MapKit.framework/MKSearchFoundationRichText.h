/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SearchFoundation/SFRichText.h>

@interface MKSearchFoundationRichText : SFRichText {

	/*^block*/id _completionHandlers;

}

@property (nonatomic,copy) id completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(id)initWithString:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(id)completionHandlers;
-(void)setCompletionHandlers:(id)arg1 ;
-(void)loadRichTextWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isRichTextResolved;
-(void)_invokeCompletionHandlers;
-(id)initRichTextTitleWithMapItem:(id)arg1 resultsType:(unsigned long long)arg2 ;
@end
