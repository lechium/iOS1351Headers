/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:38 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SFFeedbackListener.h>

@class NSArray, NSString;

@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener> {

	int _uiTarget;
	NSArray* _sections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedbackListenerForParsec;
-(id)init;
-(id)traits;
-(id)initWithClientType:(unsigned long long)arg1 ;
-(void)didRankSections:(id)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(void)resultsDidBecomeVisible:(id)arg1 ;
-(void)didEngageSection:(id)arg1 ;
@end

