//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveFSServiceSearchResultHandler, NSDictionary, NSLock, NSMutableData, NSString, SMBPiston, pipeChannel, searchResults, wspContext;

@interface smbSearchContext : NSObject
{
    _Bool _isAborted;	// 8 = 0x8
    _Bool _isFinished;	// 9 = 0x9
    _Bool _treeIsConnected;	// 10 = 0xa
    int _searchReturnTypes;	// 12 = 0xc
    NSLock *_searchLock;	// 16 = 0x10
    NSString *_searchToken;	// 24 = 0x18
    NSDictionary *_searchCriteria;	// 32 = 0x20
    unsigned long long _callerID;	// 40 = 0x28
    LiveFSServiceSearchResultHandler *_handler;	// 48 = 0x30
    wspContext *_wctx;	// 56 = 0x38
    NSMutableData *_replyData;	// 64 = 0x40
    searchResults *_searchRows;	// 72 = 0x48
    SMBPiston *_pd;	// 80 = 0x50
    pipeChannel *_pipe0;	// 88 = 0x58
    pipeChannel *_pipe1;	// 96 = 0x60
    struct smb_tree_connect_disc _treeParam;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000010000bf0c
@property int searchReturnTypes; // @synthesize searchReturnTypes=_searchReturnTypes;
@property(retain) pipeChannel *pipe1; // @synthesize pipe1=_pipe1;
@property(retain) pipeChannel *pipe0; // @synthesize pipe0=_pipe0;
@property(readonly) _Bool treeIsConnected; // @synthesize treeIsConnected=_treeIsConnected;
@property struct smb_tree_connect_disc treeParam; // @synthesize treeParam=_treeParam;
@property(retain) SMBPiston *pd; // @synthesize pd=_pd;
@property(retain) searchResults *searchRows; // @synthesize searchRows=_searchRows;
@property(readonly) NSMutableData *replyData; // @synthesize replyData=_replyData;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isAborted; // @synthesize isAborted=_isAborted;
@property(retain) wspContext *wctx; // @synthesize wctx=_wctx;
@property(retain) LiveFSServiceSearchResultHandler *handler; // @synthesize handler=_handler;
@property unsigned long long callerID; // @synthesize callerID=_callerID;
@property(readonly) NSDictionary *searchCriteria; // @synthesize searchCriteria=_searchCriteria;
@property(retain) NSString *searchToken; // @synthesize searchToken=_searchToken;
@property(retain) NSLock *searchLock; // @synthesize searchLock=_searchLock;
- (void)logConfig;	// IMP=0x000000010000bd54
- (id)makeStandardPath:(id)arg1;	// IMP=0x000000010000bc00
- (id)parseSearchResults:(id)arg1;	// IMP=0x000000010000aee8
- (int)pipeClose:(unsigned int)arg1;	// IMP=0x000000010000ae24
- (int)pipeWrite:(unsigned int)arg1 WriteData:(id)arg2;	// IMP=0x000000010000ad38
- (int)pipeTransceive:(unsigned int)arg1 DataIn:(id)arg2 DataOut:(id)arg3;	// IMP=0x000000010000ac30
- (int)pipeWait:(unsigned int)arg1;	// IMP=0x000000010000ab6c
- (int)pipeOpen:(unsigned int)arg1;	// IMP=0x000000010000aad8
- (int)doGetRows:(unsigned int)arg1 EndOfRowSet:(_Bool *)arg2;	// IMP=0x000000010000a504
- (int)doDisconnect:(unsigned int)arg1;	// IMP=0x000000010000a328
- (int)doFreeCursor:(unsigned int)arg1;	// IMP=0x000000010000a068
- (int)doSetBindings:(unsigned int)arg1;	// IMP=0x0000000100009d20
- (int)doQueryStatusExMessage:(unsigned int)arg1 QueryStatExResults:(id)arg2;	// IMP=0x0000000100009860
- (int)doQueryStatusMessage:(unsigned int)arg1 QTStatus:(unsigned int *)arg2;	// IMP=0x00000001000094d0
- (int)doQueryMessage:(unsigned int)arg1 PrimaryQuery:(_Bool)arg2;	// IMP=0x000000010000902c
- (int)doConnectMessage:(unsigned int)arg1 PrimaryConnect:(_Bool)arg2;	// IMP=0x0000000100008c18
- (int)procSecondaryQuery:(unsigned int)arg1 QueryExResults:(id)arg2;	// IMP=0x0000000100008964
- (int)procPrimaryQuery:(unsigned int)arg1 QueryExResults:(id)arg2;	// IMP=0x0000000100008668
- (int)procCheckIndexingEnabled:(unsigned int)arg1 IndexEnable:(_Bool *)arg2;	// IMP=0x000000010000822c
- (int)doTreeDisconnect;	// IMP=0x0000000100008134
- (int)logoutDisconnect;	// IMP=0x00000001000080e8
- (int)doTreeConnect;	// IMP=0x0000000100007eec
- (int)parseSearchCriteria:(id)arg1;	// IMP=0x0000000100007abc
- (void)setSearchDone;	// IMP=0x0000000100007a38
- (_Bool)checkSearchDone;	// IMP=0x00000001000079a0
- (void)setSearchAborted;	// IMP=0x000000010000791c
- (_Bool)checkSearchAborted;	// IMP=0x0000000100007884
- (id)init;	// IMP=0x00000001000076c8

@end
