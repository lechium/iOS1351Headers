/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:17 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/DAEAS-Structs.h>
#import <libobjc.A.dylib/ASParsingLeafNode.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {

	NSDate* _exceptionDate;
	NSString* _uidWithoutExceptionDate;
	BOOL _isOutlookCreatedUid;

}
+(BOOL)expectsContent;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)parsingState;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(id)uidForCalFramework;
-(id)recurrenceIDForResponseEmail;
-(id)initWithCalFrameworkString:(id)arg1 ;
-(id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2 ;
-(id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(BOOL*)arg2 ;
-(id)initWithGlobalObjectIdString:(id)arg1 ;
-(id)initWithUidString:(id)arg1 ;
-(id)uidForResponseEmailWithTimeZone:(id)arg1 ;
-(id)uidWithoutExceptionDate;
-(id)uidForActiveSyncWithTimeZone:(id)arg1 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
@end

