/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:36 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsUI.framework/CoreSuggestionsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSuggestionsUI/SGList.h>
#import <libobjc.A.dylib/SGListDelegate.h>

@protocol SGSuggestionDelegate;
@class NSMutableArray, NSArray, NSString;

@interface SGSuggestionStore : SGList <SGListDelegate> {

	NSMutableArray* _suggestions;
	long long _notificationsLockCount;
	BOOL _modified;
	id<SGSuggestionDelegate> _suggestionDelegate;

}

@property (nonatomic,copy) NSArray * suggestions; 
@property (assign,nonatomic,__weak) id<SGSuggestionDelegate> suggestionDelegate;              //@synthesize suggestionDelegate=_suggestionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSArray *)suggestions;
-(void)setSuggestions:(NSArray *)arg1 ;
-(id<SGSuggestionDelegate>)suggestionDelegate;
-(void)setSuggestionDelegate:(id<SGSuggestionDelegate>)arg1 ;
-(void)list:(id)arg1 didAddItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)list:(id)arg1 didRemoveItem:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(id)sectionWithItem:(id)arg1 ;
-(void)addSuggestion:(id)arg1 ;
-(void)removeSuggestion:(id)arg1 ;
-(void)updateSuggestion:(id)arg1 ;
-(void)lockNotifications;
-(void)unlockNotifications;
@end
