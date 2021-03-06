/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:36:25 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/CXCallDirectoryProviderVendorProtocol.h>

@protocol CXCallDirectoryExtensionContextDelegate;
@class CXCallDirectoryMutablePhoneNumberEntryData, CXCallDirectoryMutableLabeledPhoneNumberEntryData, NSString;

@interface CXCallDirectoryExtensionContext : NSExtensionContext <CXCallDirectoryProviderVendorProtocol> {

	BOOL _incremental;
	BOOL _hasQueriedIsIncremental;
	id<CXCallDirectoryExtensionContextDelegate> _delegate;
	CXCallDirectoryMutablePhoneNumberEntryData* _pendingBlockingEntryData;
	long long _pendingBlockingEntryChangeType;
	CXCallDirectoryMutableLabeledPhoneNumberEntryData* _pendingIdentificationEntryDataForAddition;
	CXCallDirectoryMutablePhoneNumberEntryData* _pendingIdentificationEntryDataForRemoval;
	long long _pendingIdentificationEntryChangeType;
	/*^block*/id _remoteObjectProxyGenerator;

}

@property (nonatomic,retain) CXCallDirectoryMutablePhoneNumberEntryData * pendingBlockingEntryData;                                      //@synthesize pendingBlockingEntryData=_pendingBlockingEntryData - In the implementation block
@property (assign,nonatomic) long long pendingBlockingEntryChangeType;                                                                   //@synthesize pendingBlockingEntryChangeType=_pendingBlockingEntryChangeType - In the implementation block
@property (nonatomic,retain) CXCallDirectoryMutableLabeledPhoneNumberEntryData * pendingIdentificationEntryDataForAddition;              //@synthesize pendingIdentificationEntryDataForAddition=_pendingIdentificationEntryDataForAddition - In the implementation block
@property (nonatomic,retain) CXCallDirectoryMutablePhoneNumberEntryData * pendingIdentificationEntryDataForRemoval;                      //@synthesize pendingIdentificationEntryDataForRemoval=_pendingIdentificationEntryDataForRemoval - In the implementation block
@property (assign,nonatomic) long long pendingIdentificationEntryChangeType;                                                             //@synthesize pendingIdentificationEntryChangeType=_pendingIdentificationEntryChangeType - In the implementation block
@property (assign,nonatomic) BOOL hasQueriedIsIncremental;                                                                               //@synthesize hasQueriedIsIncremental=_hasQueriedIsIncremental - In the implementation block
@property (nonatomic,copy) id remoteObjectProxyGenerator;                                                                                //@synthesize remoteObjectProxyGenerator=_remoteObjectProxyGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallDirectoryExtensionContextDelegate> delegate;                                                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isIncremental,nonatomic,readonly) BOOL incremental;                                                                    //@synthesize incremental=_incremental - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<CXCallDirectoryExtensionContextDelegate>)delegate;
-(void)setDelegate:(id<CXCallDirectoryExtensionContextDelegate>)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(oneway void)requestFailedWithError:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyGenerator;
-(long long)pendingBlockingEntryChangeType;
-(CXCallDirectoryMutablePhoneNumberEntryData *)pendingBlockingEntryData;
-(void)_flushPendingBlockingEntryData;
-(void)setPendingBlockingEntryChangeType:(long long)arg1 ;
-(long long)pendingIdentificationEntryChangeType;
-(CXCallDirectoryMutableLabeledPhoneNumberEntryData *)pendingIdentificationEntryDataForAddition;
-(CXCallDirectoryMutablePhoneNumberEntryData *)pendingIdentificationEntryDataForRemoval;
-(void)_flushPendingIdentificationEntryData;
-(void)setPendingIdentificationEntryChangeType:(long long)arg1 ;
-(void)setPendingBlockingEntryData:(CXCallDirectoryMutablePhoneNumberEntryData *)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(void)setPendingIdentificationEntryDataForAddition:(CXCallDirectoryMutableLabeledPhoneNumberEntryData *)arg1 ;
-(void)setPendingIdentificationEntryDataForRemoval:(CXCallDirectoryMutablePhoneNumberEntryData *)arg1 ;
-(BOOL)hasQueriedIsIncremental;
-(void)setHasQueriedIsIncremental:(BOOL)arg1 ;
-(void)appendBlockingEntryPhoneNumber:(long long)arg1 changeType:(long long)arg2 ;
-(BOOL)isIncremental;
-(void)_performBlockIfIncremental:(/*^block*/id)arg1 usingSelectorForExceptionMessage:(SEL)arg2 ;
-(void)appendIdentificationEntryForAdditionWithPhoneNumber:(long long)arg1 label:(id)arg2 ;
-(void)appendIdentificationEntryForRemovalWithPhoneNumber:(long long)arg1 ;
-(void)addBlockingEntryWithNextSequentialPhoneNumber:(long long)arg1 ;
-(void)removeBlockingEntryWithPhoneNumber:(long long)arg1 ;
-(void)removeAllBlockingEntries;
-(void)addIdentificationEntryWithNextSequentialPhoneNumber:(long long)arg1 label:(id)arg2 ;
-(void)removeIdentificationEntryWithPhoneNumber:(long long)arg1 ;
-(void)removeAllIdentificationEntries;
-(void)completeRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setRemoteObjectProxyGenerator:(id)arg1 ;
@end

