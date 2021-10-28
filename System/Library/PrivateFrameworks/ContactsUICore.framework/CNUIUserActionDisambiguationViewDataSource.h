/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:31 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContactsUICore/CNUIUserActionListDataSource.h>
#import <libobjc.A.dylib/CNUIUserActionDisambiguationViewDataSource.h>

@protocol CNUIUserActionDisambiguationViewDataSource <CNUIUserActionListDataSource>
@required
-(id)categoriesForContactActionsView:(id)arg1;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2;

@end


@class NSString;

@interface CNUIUserActionDisambiguationViewDataSource : CNUIUserActionListDataSource <CNUIUserActionDisambiguationViewDataSource>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL tracksChanges; 
-(id)categoriesForContactActionsView:(id)arg1 ;
-(id)contactActionsView:(id)arg1 imageForActionCategory:(id)arg2 ;
@end
