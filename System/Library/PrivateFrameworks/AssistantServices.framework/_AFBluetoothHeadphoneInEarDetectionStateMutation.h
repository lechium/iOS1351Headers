/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:19 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothHeadphoneInEarDetectionStateMutating.h>

@class AFBluetoothHeadphoneInEarDetectionState, NSString;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {

	AFBluetoothHeadphoneInEarDetectionState* _baseModel;
	BOOL _isEnabled;
	long long _primaryEarbudSide;
	long long _primaryInEarStatus;
	long long _secondaryInEarStatus;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasPrimaryEarbudSide : 1;
		unsigned hasPrimaryInEarStatus : 1;
		unsigned hasSecondaryInEarStatus : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(id)generate;
-(void)setPrimaryEarbudSide:(long long)arg1 ;
-(void)setPrimaryInEarStatus:(long long)arg1 ;
-(void)setSecondaryInEarStatus:(long long)arg1 ;
@end
