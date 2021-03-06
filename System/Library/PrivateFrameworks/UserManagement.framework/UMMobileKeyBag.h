/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:34:24 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UserManagement/UserManagement-Structs.h>
@interface UMMobileKeyBag : NSObject
+(void)initialize;
+(BOOL)inSyncBubble;
+(BOOL)isMultiUser;
+(id)currentPersona;
+(id)currentUser;
+(int)_foregroundUID;
+(id)_userAttributesForUID:(unsigned)arg1 outError:(id*)arg2 ;
+(double)passcodeBackOffIntervalForUser:(id)arg1 ;
+(void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)personaSpecForUser:(id)arg1 ;
+(void)_setAttributes:(id)arg1 onUser:(id)arg2 ;
+(void)_handleAttributeAccessCFError:(CFErrorRef)arg1 outError:(id*)arg2 ;
+(id)_mutablePersonaSpecBase;
+(id)_uidDictForUser:(id)arg1 ;
+(id)currentSyncBubbleUser;
+(id)allSyncBubbleUsers;
+(BOOL)_start:(BOOL)arg1 syncBubbleForUser:(id)arg2 outError:(id*)arg3 ;
+(unsigned long long)userType;
+(unsigned long long)maxNumberOfUsers;
+(unsigned long long)userQuotaSize;
+(unsigned)lastLoggedInUID;
+(id)loginUser;
+(id)lastLoggedInUser;
+(id)allUsers;
+(BOOL)adoptPersonaVoucherForAccoutID:(id)arg1 outError:(id*)arg2 ;
+(id)currentUserSwitchContext;
+(void)currentUserSwitchContextHasBeenUsed;
+(id)loadUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)deleteUser:(id)arg1 ;
+(id)userFromAttributes:(id)arg1 ;
+(BOOL)fetchAttributesForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)isLoginSession;
+(void)updateLoginSessionType;
+(BOOL)writeAttributesToDiskForUser:(id)arg1 outError:(id*)arg2 ;
+(id)taskFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryRepresentationOfTask:(id)arg1 ;
+(id)queuedSyncBubbleUsers;
+(id)syncBubbleMachServiceNamesForUser:(id)arg1 ;
+(BOOL)startSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)stopSyncBubbleForUser:(id)arg1 outError:(id*)arg2 ;
+(BOOL)clearSyncBubblesWithOutError:(id*)arg1 ;
@end

