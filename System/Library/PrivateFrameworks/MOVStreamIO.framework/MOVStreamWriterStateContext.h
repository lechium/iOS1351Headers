/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, October 27, 2021 at 3:22:32 PM Mountain Standard Time
                       * Operating System: Version 13.5.1 (Build 17F80)
                       * Image Source: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSError;


@protocol MOVStreamWriterStateContext <NSObject>
@property (retain) NSArray * movMetadataItems; 
@property (retain) NSError * criticalError; 
@required
-(void)setCriticalError:(id)arg1;
-(void)processFinishRecording;
-(NSError *)criticalError;
-(void)setMovMetadataItems:(id)arg1;
-(void)finishAVWriter;
-(void)executePrepareToRecordWithMovieMetadata:(id)arg1;
-(void)finishAndDrainFifoFirst;
-(void)deleteMOVFile;
-(void)deleteFileOnCancel;
-(void)processCancelRecording;
-(void)processForceFinishRecording;
-(NSArray *)movMetadataItems;

@end
