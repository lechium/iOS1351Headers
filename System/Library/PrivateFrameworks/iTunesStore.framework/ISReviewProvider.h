/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:35 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesStore/iTunesStore-Structs.h>
#import <iTunesStore/ISDataProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISReviewProvider : ISDataProvider <NSCopying> {

	BOOL _backgroundReview;

}

@property (getter=isBackgroundReview) BOOL backgroundReview;              //@synthesize backgroundReview=_backgroundReview - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseData:(id)arg1 returningError:(id*)arg2 ;
-(BOOL)isBackgroundReview;
-(void)setBackgroundReview:(BOOL)arg1 ;
@end
