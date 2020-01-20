//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCManagedRecordedVideo, SCManagedURL, SCTemporaryDatastore;

@interface SCRecordingFileManager : NSObject
{
    SCTemporaryDatastore *_temporaryDatastore;
    SCManagedURL *_videoURL;
    SCManagedURL *_rawVideoDataURL;
    NSArray *_restoredVideoURLs;
    SCManagedRecordedVideo *_recordedVideo;
}

@property(retain, nonatomic) SCManagedRecordedVideo *recordedVideo; // @synthesize recordedVideo=_recordedVideo;
- (void).cxx_destruct;
- (id)_activeVideoPaths;
- (void)removeActiveRecordingURLOfRecordedVideo;
- (void)addRecordingURLToActiveVideoPaths;
- (void)restoreActiveVideoURLs;
- (id)generateTempOutputURLAndAddActiveVideoURL;
- (id)initWithTemporaryDatastore:(id)arg1;

@end
