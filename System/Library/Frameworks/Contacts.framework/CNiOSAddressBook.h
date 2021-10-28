/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:35:44 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableSet;

@interface CNiOSAddressBook : NSObject {

	BOOL _addressBookIsShared;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _addressBookPool;
	/*^block*/id _addressBookProvider;
	NSObject*<OS_dispatch_source> _memoryMonitoringSource;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                          //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * addressBookPool;                                    //@synthesize addressBookPool=_addressBookPool - In the implementation block
@property (nonatomic,copy,readonly) id addressBookProvider;                                       //@synthesize addressBookProvider=_addressBookProvider - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> memoryMonitoringSource;              //@synthesize memoryMonitoringSource=_memoryMonitoringSource - In the implementation block
@property (nonatomic,readonly) BOOL addressBookIsShared;                                          //@synthesize addressBookIsShared=_addressBookIsShared - In the implementation block
+(void)initialize;
+(void*)newInMemoryAddressBook;
+(void*)newAddressBookWithDelegateInfo:(id)arg1 ;
+(void*)newAddressBookWithURL:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(id)initWithContactsEnvironment:(id)arg1 ;
-(void)performSynchronousWorkWithInvalidatedAddressBook:(/*^block*/id)arg1 ;
-(void)performAsynchronousWorkWithInvalidatedAddressBook:(/*^block*/id)arg1 ;
-(id)resultWithInvalidatedAddressBook:(/*^block*/id)arg1 ;
-(id)initWithAddressBookProvider:(/*^block*/id)arg1 ;
-(void)flushPool;
-(NSMutableSet *)addressBookPool;
-(id)addressBookProvider;
-(void*)popAddressBook;
-(void*)preparedAddressBook:(void*)arg1 ;
-(void)pushAddressBook:(void*)arg1 ;
-(NSObject*<OS_dispatch_source>)memoryMonitoringSource;
-(BOOL)addressBookIsShared;
@end
