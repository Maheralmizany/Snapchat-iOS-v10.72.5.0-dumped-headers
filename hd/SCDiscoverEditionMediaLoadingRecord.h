//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface SCDiscoverEditionMediaLoadingRecord : NSObject
{
    _Bool _needsLoading;
    _Bool _finishedLoading;
    _Bool _loadingSuccess;
    NSError *_loadingError;
}

@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(nonatomic) _Bool loadingSuccess; // @synthesize loadingSuccess=_loadingSuccess;
@property(nonatomic) _Bool finishedLoading; // @synthesize finishedLoading=_finishedLoading;
@property(nonatomic) _Bool needsLoading; // @synthesize needsLoading=_needsLoading;
- (void).cxx_destruct;

@end

