/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:20 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface MKTransitInfoPreloader : NSObject {

	NSArray* _transitLabels;

}
+(id)separatorImageWithLineHeight:(double)arg1 ;
+(id)attributedTextFromPreload:(id)arg1 view:(id)arg2 ;
-(id)initWithTransitLabels:(id)arg1 ;
-(void)preloadWithCompletion:(/*^block*/id)arg1 ;
@end
