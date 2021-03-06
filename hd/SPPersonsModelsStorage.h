//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SPCacheControllerImplementation;

@interface SPPersonsModelsStorage : NSObject
{
    _Bool _preferSegmentationResult;
    id <SPPersonProcessor> _mainPerson;
    id <SPPersonProcessor> _secondPerson;
    id <SPSettings> _settings;
    id <SPFileManager> _fileManager;
    SPCacheControllerImplementation *_fileCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(nonatomic) _Bool preferSegmentationResult; // @synthesize preferSegmentationResult=_preferSegmentationResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SPCacheControllerImplementation *fileCache; // @synthesize fileCache=_fileCache;
@property(retain, nonatomic) id <SPFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (id)_fullPathForCacheKey:(id)arg1 filename:(id)arg2;
- (id)_secondPersonPath;
- (id)_mainPersonPath;
- (_Bool)_savePersonProcessor:(id)arg1 byPath:(id)arg2;
- (id)_personProcessorByPath:(id)arg1;
@property(retain, nonatomic) id <SPPersonProcessor> secondPerson; // @synthesize secondPerson=_secondPerson;
@property(retain, nonatomic) id <SPPersonProcessor> mainPerson; // @synthesize mainPerson=_mainPerson;
- (id)initWithSettings:(id)arg1 preferSegmentationResult:(_Bool)arg2;

@end

