//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SCMockAudioSession : NSObject
{
    NSString *_category;
    unsigned long long _categoryOptions;
    NSString *_mode;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long categoryOptions; // @synthesize categoryOptions=_categoryOptions;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;
- (unsigned long long)recordPermission;
- (float)outputVolume;
- (_Bool)isInputAvailable;
- (id)availableInputs;
- (id)currentRoute;
- (_Bool)secondaryAudioShouldBeSilencedHint;

@end
