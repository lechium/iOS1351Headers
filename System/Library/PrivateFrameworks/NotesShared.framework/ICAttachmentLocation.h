/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:17:02 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NotesShared/ICLocation.h>
#import <libobjc.A.dylib/ICSearchIndexableTarget.h>

@class NSString, ICAttachment;

@interface ICAttachmentLocation : ICLocation <ICSearchIndexableTarget>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL placeUpdated; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (nonatomic,readonly) NSString * formattedAddressWithoutAttachmentTitle; 
+(id)newAttachmentLocationForAttachment:(id)arg1 ;
-(id)targetSearchIndexable;
-(NSString *)formattedAddressWithoutAttachmentTitle;
@end

