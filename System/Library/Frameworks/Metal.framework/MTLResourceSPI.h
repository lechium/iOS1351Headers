/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:10 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MTLResourceAllocationInfo;


@protocol MTLResourceSPI <MTLResource>
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
@property (readonly) unsigned long long allocationID; 
@property (readonly) unsigned long long protectionOptions; 
@property (readonly) unsigned long long unfilteredResourceOptions; 
@required
-(BOOL)isComplete;
-(void)waitUntilComplete;
-(unsigned long long)protectionOptions;
-(BOOL)isPurgeable;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
-(BOOL)doesAliasResource:(id)arg1;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(unsigned long long)allocationID;
-(unsigned long long)unfilteredResourceOptions;

@end

