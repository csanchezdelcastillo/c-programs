function es_divisible_entre_los_menores_que(dividendo, divisor){

    if(divisor == 1)
	return false

return dividendo % divisor == 0 || es_divisible_entre_los_menores_que(dividendo, divisor -1 )



}




function is_prime(candidate){
return !es_divisible_entre_los_menores_que(candidate-1)
}
is_prime(possible)
