//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface SCAvatarBuilderMirrorDecryptionResult : NSObject
{
    _Bool _success;
    NSMutableData *_data;
}

@property(readonly, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)initWithSuccess:(_Bool)arg1 data:(id)arg2;

@end

