/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, April 30, 2021 at 11:37:11 AM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FileProvider/FPTransformOperation.h>

@interface FPTrashOperation : FPTransformOperation
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithItems:(id)arg1 ;
-(id)fp_prettyDescription;
-(void)presendNotifications;
-(void)subclassPreflightWithCompletion:(/*^block*/id)arg1 ;
-(id)replicateForItems:(id)arg1 ;
-(unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)finalItemsForStitcherForResult:(id)arg1 ;
@end

