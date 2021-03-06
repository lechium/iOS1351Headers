/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:22 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKSearchFoundationRichText.h>

@interface MKSearchFoundationBusinessReviewRichText : MKSearchFoundationRichText {

	BOOL _reviewResolved;

}

@property (getter=isReviewResolved) BOOL reviewResolved;              //@synthesize reviewResolved=_reviewResolved - In the implementation block
-(BOOL)isRichTextResolved;
-(void)setReviewResolved:(BOOL)arg1 ;
-(BOOL)isReviewResolved;
-(void)resolveReviewStringWithProviderNameByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3 ;
-(void)resolveReviewStringWithProviderNameNotFoundByMapItem:(id)arg1 lines:(id)arg2 temporaryReviewString:(id)arg3 ;
@end

