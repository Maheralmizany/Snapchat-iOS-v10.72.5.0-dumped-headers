//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EGODatabaseStatement, SCGalleryFaceInfoIndexer;

@interface SCGalleryFaceRecognizer : NSObject
{
    id <SCPerforming> _performer;
    SCGalleryFaceInfoIndexer *_faceInfoIndexer;
    struct KnnFaceRecognizer *_faceRecognizer;
    EGODatabaseStatement *_queryAllFaceFeatures;
}

- (void).cxx_destruct;
- (void)_setupDatabase:(id)arg1;
- (void)_initializeFaceRecognizer;
- (void)_loadModelData:(id)arg1;
- (void)trainFaceRecognizer:(id)arg1 featureLabels:(id)arg2 rerun:(_Bool)arg3;
- (id)recognizeFace:(id)arg1;
- (id)initWithFaceInfoIndexer:(id)arg1;

@end
