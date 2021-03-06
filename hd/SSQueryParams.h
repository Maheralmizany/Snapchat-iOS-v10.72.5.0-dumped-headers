//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AIText, NSArray, NSNumber;

@interface SSQueryParams : NSObject
{
    _Bool _searchByScenarioId;
    _Bool _keyboardOnly;
    _Bool _allowTwoPersons;
    unsigned long long _faceMode;
    unsigned long long _gender;
    unsigned long long _searchMode;
    unsigned long long _friendGender;
    NSNumber *_currentTime;
    NSNumber *_dayOfUsage;
    NSNumber *_scenariosRowSize;
    NSArray *_recentScenarioIds;
    AIText *_overrideText;
}

@property(readonly, nonatomic) AIText *overrideText; // @synthesize overrideText=_overrideText;
@property(readonly, nonatomic) NSArray *recentScenarioIds; // @synthesize recentScenarioIds=_recentScenarioIds;
@property(readonly, nonatomic) _Bool allowTwoPersons; // @synthesize allowTwoPersons=_allowTwoPersons;
@property(readonly, nonatomic) _Bool keyboardOnly; // @synthesize keyboardOnly=_keyboardOnly;
@property(readonly, nonatomic) _Bool searchByScenarioId; // @synthesize searchByScenarioId=_searchByScenarioId;
@property(readonly, nonatomic) NSNumber *scenariosRowSize; // @synthesize scenariosRowSize=_scenariosRowSize;
@property(readonly, nonatomic) NSNumber *dayOfUsage; // @synthesize dayOfUsage=_dayOfUsage;
@property(readonly, nonatomic) NSNumber *currentTime; // @synthesize currentTime=_currentTime;
@property(readonly, nonatomic) unsigned long long friendGender; // @synthesize friendGender=_friendGender;
@property(readonly, nonatomic) unsigned long long searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(readonly, nonatomic) unsigned long long faceMode; // @synthesize faceMode=_faceMode;
- (void).cxx_destruct;
- (id)initForIdSearchWithFaceMode:(unsigned long long)arg1 withGender:(unsigned long long)arg2 withDayOfUsage:(id)arg3 withCurrentTime:(id)arg4 withKeyboardOnly:(_Bool)arg5 allowTwoPersons:(_Bool)arg6 withFriendGender:(unsigned long long)arg7 withOverrideText:(id)arg8;
- (id)initWithFaceMode:(unsigned long long)arg1 withGender:(unsigned long long)arg2 withSearchMode:(unsigned long long)arg3 withDayOfUsage:(id)arg4 withCurrentTime:(id)arg5 scenariosInRow:(id)arg6 withSearchByScenarioId:(_Bool)arg7 withKeyboardOnly:(_Bool)arg8 allowTwoPersons:(_Bool)arg9 withRecentScenarioIds:(id)arg10 withFriendGender:(unsigned long long)arg11;
- (id)initWithFaceMode:(unsigned long long)arg1 withGender:(unsigned long long)arg2 withSearchMode:(unsigned long long)arg3 withDayOfUsage:(id)arg4 withCurrentTime:(id)arg5 scenariosInRow:(id)arg6 withSearchByScenarioId:(_Bool)arg7 withKeyboardOnly:(_Bool)arg8 allowTwoPersons:(_Bool)arg9 withRecentScenarioIds:(id)arg10 withFriendGender:(unsigned long long)arg11 withOverrideText:(id)arg12;

@end

