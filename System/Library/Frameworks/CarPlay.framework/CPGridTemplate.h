/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:18:23 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPGridTemplateClientDelegate.h>
#import <libobjc.A.dylib/CPBarButtonProviding.h>

@class NSArray, CPBarButton, NSString, NAFuture;

@interface CPGridTemplate : CPTemplate <CPGridTemplateClientDelegate, CPBarButtonProviding> {

	NSArray* _gridButtons;
	NSString* _title;

}

@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (nonatomic,readonly) NSArray * gridButtons;                             //@synthesize gridButtons=_gridButtons - In the implementation block
@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * leadingNavigationBarButtons; 
@property (nonatomic,retain) NSArray * trailingNavigationBarButtons; 
@property (nonatomic,retain) CPBarButton * backButton; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(NSArray *)gridButtons;
-(id)initWithTitle:(id)arg1 gridButtons:(id)arg2 ;
@end
