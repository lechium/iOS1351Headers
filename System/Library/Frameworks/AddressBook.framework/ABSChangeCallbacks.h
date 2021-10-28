/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:51 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ABSAddressBook, NSMutableArray;

@interface ABSChangeCallbacks : NSObject {

	ABSAddressBook* _addressBook;
	NSMutableArray* _externalCallbacks;
	NSMutableArray* _externalCallBackThreads;
	NSMutableArray* _externalCallbackContexts;
	long long _initialAccessStatus;

}
-(void)dealloc;
-(void)contactStoreChanged:(id)arg1 ;
-(id)initWithAddressBook:(id)arg1 ;
-(BOOL)hasExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)addExternalCallback:(/*function pointer*/void*)arg1 onThread:(id)arg2 withContext:(void*)arg3 ;
-(void)removeExternalCallback:(/*function pointer*/void*)arg1 withContext:(void*)arg2 ;
@end
