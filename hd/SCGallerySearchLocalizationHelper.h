//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SCGallerySearchLocalizationHelper : NSObject
{
    _Bool _loaded;
    NSMutableDictionary *_conceptIdLocaleToConceptsMap;
    NSMutableDictionary *_localeConceptToConceptIdMap;
    NSMutableDictionary *_languageIdToTranslatedTagDict;
}

+ (id)languageIdForLocale:(id)arg1;
+ (_Bool)isConceptSearchDisabled:(id)arg1 currentLocale:(id)arg2;
+ (_Bool)isConceptSearchDisabled;
+ (id)systemLanguageId;
- (void).cxx_destruct;
- (id)_dictionaryForTranslation;
- (void)_loadMaps;
- (id)languageIdToLocale:(id)arg1;
- (id)prefixMatchingForTags:(id)arg1 segment:(id)arg2 languageId:(id)arg3;
- (id)translate:(id)arg1 fromLanguageId:(id)arg2 toLanguageId:(id)arg3;
- (id)init;

@end
