// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to SingleEntityWithNoRelationships.h instead.

#import <CoreData/CoreData.h>












@class UIColor;





@interface SingleEntityWithNoRelationshipsID : NSManagedObjectID {}
@end

@interface _SingleEntityWithNoRelationships : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
+ (NSString*)entityName;
+ (NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
- (SingleEntityWithNoRelationshipsID*)objectID;



@property (nonatomic, retain) NSNumber *floatTestAttribute;

@property float floatTestAttributeValue;
- (float)floatTestAttributeValue;
- (void)setFloatTestAttributeValue:(float)value_;

//- (BOOL)validateFloatTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSDate *dateWithCustomFormat;

//- (BOOL)validateDateWithCustomFormat:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *int32TestAttribute;

@property int int32TestAttributeValue;
- (int)int32TestAttributeValue;
- (void)setInt32TestAttributeValue:(int)value_;

//- (BOOL)validateInt32TestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSDate *dateTestAttribute;

//- (BOOL)validateDateTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *int16TestAttribute;

@property short int16TestAttributeValue;
- (short)int16TestAttributeValue;
- (void)setInt16TestAttributeValue:(short)value_;

//- (BOOL)validateInt16TestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *notInJsonAttribute;

//- (BOOL)validateNotInJsonAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSDecimalNumber *decimalTestAttribute;

//- (BOOL)validateDecimalTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *doubleTestAttribute;

@property double doubleTestAttributeValue;
- (double)doubleTestAttributeValue;
- (void)setDoubleTestAttributeValue:(double)value_;

//- (BOOL)validateDoubleTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *booleanTestAttribute;

@property BOOL booleanTestAttributeValue;
- (BOOL)booleanTestAttributeValue;
- (void)setBooleanTestAttributeValue:(BOOL)value_;

//- (BOOL)validateBooleanTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) UIColor *colorTestAttribute;

//- (BOOL)validateColorTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *stringTestAttribute;

//- (BOOL)validateStringTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *nullTestAttribute;

@property long long nullTestAttributeValue;
- (long long)nullTestAttributeValue;
- (void)setNullTestAttributeValue:(long long)value_;

//- (BOOL)validateNullTestAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSString *mappedStringAttribute;

//- (BOOL)validateMappedStringAttribute:(id*)value_ error:(NSError**)error_;



@property (nonatomic, retain) NSNumber *int64TestAttribute;

@property long long int64TestAttributeValue;
- (long long)int64TestAttributeValue;
- (void)setInt64TestAttributeValue:(long long)value_;

//- (BOOL)validateInt64TestAttribute:(id*)value_ error:(NSError**)error_;





@end

@interface _SingleEntityWithNoRelationships (CoreDataGeneratedAccessors)

@end

@interface _SingleEntityWithNoRelationships (CoreDataGeneratedPrimitiveAccessors)


- (NSNumber*)primitiveFloatTestAttribute;
- (void)setPrimitiveFloatTestAttribute:(NSNumber*)value;

- (float)primitiveFloatTestAttributeValue;
- (void)setPrimitiveFloatTestAttributeValue:(float)value_;




- (NSDate*)primitiveDateWithCustomFormat;
- (void)setPrimitiveDateWithCustomFormat:(NSDate*)value;




- (NSNumber*)primitiveInt32TestAttribute;
- (void)setPrimitiveInt32TestAttribute:(NSNumber*)value;

- (int)primitiveInt32TestAttributeValue;
- (void)setPrimitiveInt32TestAttributeValue:(int)value_;




- (NSDate*)primitiveDateTestAttribute;
- (void)setPrimitiveDateTestAttribute:(NSDate*)value;




- (NSNumber*)primitiveInt16TestAttribute;
- (void)setPrimitiveInt16TestAttribute:(NSNumber*)value;

- (short)primitiveInt16TestAttributeValue;
- (void)setPrimitiveInt16TestAttributeValue:(short)value_;




- (NSString*)primitiveNotInJsonAttribute;
- (void)setPrimitiveNotInJsonAttribute:(NSString*)value;




- (NSDecimalNumber*)primitiveDecimalTestAttribute;
- (void)setPrimitiveDecimalTestAttribute:(NSDecimalNumber*)value;




- (NSNumber*)primitiveDoubleTestAttribute;
- (void)setPrimitiveDoubleTestAttribute:(NSNumber*)value;

- (double)primitiveDoubleTestAttributeValue;
- (void)setPrimitiveDoubleTestAttributeValue:(double)value_;




- (NSNumber*)primitiveBooleanTestAttribute;
- (void)setPrimitiveBooleanTestAttribute:(NSNumber*)value;

- (BOOL)primitiveBooleanTestAttributeValue;
- (void)setPrimitiveBooleanTestAttributeValue:(BOOL)value_;




- (UIColor*)primitiveColorTestAttribute;
- (void)setPrimitiveColorTestAttribute:(UIColor*)value;




- (NSString*)primitiveStringTestAttribute;
- (void)setPrimitiveStringTestAttribute:(NSString*)value;




- (NSNumber*)primitiveNullTestAttribute;
- (void)setPrimitiveNullTestAttribute:(NSNumber*)value;

- (long long)primitiveNullTestAttributeValue;
- (void)setPrimitiveNullTestAttributeValue:(long long)value_;




- (NSString*)primitiveMappedStringAttribute;
- (void)setPrimitiveMappedStringAttribute:(NSString*)value;




- (NSNumber*)primitiveInt64TestAttribute;
- (void)setPrimitiveInt64TestAttribute:(NSNumber*)value;

- (long long)primitiveInt64TestAttributeValue;
- (void)setPrimitiveInt64TestAttributeValue:(long long)value_;




@end
