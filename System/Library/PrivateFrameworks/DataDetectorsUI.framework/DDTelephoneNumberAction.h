/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:16:29 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@class NSString;

@interface DDTelephoneNumberAction : DDAction {

	NSString* _phoneNumber;
	NSString* _body;

}
-(id)icon;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)contactsMatchingPhoneNumber:(id)arg1 inContactStore:(id)arg2 ;
-(id)labelToUseForEmail:(id)arg1 ofContact:(id)arg2 ;
-(id)labelToUseForPhoneNumber:(id)arg1 ofContact:(id)arg2 ;
-(id)contactAndLabelForPhoneNumber:(id*)arg1 ;
@end
