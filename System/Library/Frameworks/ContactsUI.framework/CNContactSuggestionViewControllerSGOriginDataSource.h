/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:03 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CNContactSuggestionViewControllerDataSource.h>

@class NSString, NSAttributedString, NSURL, SGOrigin;

@interface CNContactSuggestionViewControllerSGOriginDataSource : NSObject <CNContactSuggestionViewControllerDataSource> {

	SGOrigin* _origin;

}

@property (nonatomic,retain) SGOrigin * origin;                                    //@synthesize origin=_origin - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * appName; 
@property (nonatomic,readonly) NSAttributedString * formattedSnippet; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * date; 
@property (nonatomic,readonly) NSString * from; 
@property (nonatomic,readonly) NSURL * url; 
+(id)dateFormatter;
+(id)contactSuggestionTypeBySuggestionType;
-(unsigned long long)type;
-(NSString *)date;
-(NSURL *)url;
-(NSString *)title;
-(SGOrigin *)origin;
-(NSString *)from;
-(void)setOrigin:(SGOrigin *)arg1 ;
-(NSString *)appName;
-(NSAttributedString *)formattedSnippet;
-(id)initWithSGOrigin:(id)arg1 ;
@end

