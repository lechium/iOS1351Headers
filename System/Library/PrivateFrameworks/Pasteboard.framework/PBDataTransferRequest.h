/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:15 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, PBItemCollection, PBItem, PBItemRepresentation, NSString;

@interface PBDataTransferRequest : NSObject <NSProgressReporting> {

	PBItemCollection* _itemCollection;
	PBItem* _item;
	PBItemRepresentation* _repr;
	NSProgress* _progress;

}

@property (nonatomic,retain) PBItemCollection * itemCollection;              //@synthesize itemCollection=_itemCollection - In the implementation block
@property (nonatomic,retain) PBItem * item;                                  //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) PBItemRepresentation * repr;                    //@synthesize repr=_repr - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                          //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PBItem *)item;
-(void)setItem:(PBItem *)arg1 ;
-(NSProgress *)progress;
-(NSString *)typeIdentifier;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setItemCollection:(PBItemCollection *)arg1 ;
-(PBItemCollection *)itemCollection;
-(PBItemRepresentation *)repr;
-(void)setRepr:(PBItemRepresentation *)arg1 ;
@end

